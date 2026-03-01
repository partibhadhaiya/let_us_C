#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_CONTACTS 100
#define MAX_NAME_LENGTH 50
#define MAX_PHONE_LENGTH 20
#define MAX_EMAIL_LENGTH 50

typedef struct {
    int id;
    char firstName[MAX_NAME_LENGTH];
    char lastName[MAX_NAME_LENGTH];
    char phone[MAX_PHONE_LENGTH];
    char email[MAX_EMAIL_LENGTH];
} Contact;

Contact contacts[MAX_CONTACTS];
int contactCount = 0;
int nextId = 1;

// Function Prototypes
void displayMenu();
void addContact();
void displayContacts();
void searchContact();
void updateContact();
void deleteContact();
void saveContactsToFile();
void loadContactsFromFile();
int isValidPhone(const char *phone);
int isValidEmail(const char *email);
void clearInputBuffer();
void pressEnterToContinue();

int main() {
    loadContactsFromFile();

    int choice;

    printf("=== CONTACT MANAGEMENT SYSTEM ===\n");

    do {
        displayMenu();
        printf("Enter your choice (1-7): ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            clearInputBuffer();
            continue;
        }

        clearInputBuffer();

        switch (choice) {
            case 1: addContact(); break;
            case 2: displayContacts(); break;
            case 3: searchContact(); break;
            case 4: updateContact(); break;
            case 5: deleteContact(); break;
            case 6: saveContactsToFile(); break;
            case 7:
                saveContactsToFile();
                printf("Goodbye! Contacts saved successfully.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 7);

    return 0;
}

void displayMenu() {
    printf("\n=== MAIN MENU ===\n");
    printf("1. Add New Contact\n");
    printf("2. Display All Contacts\n");
    printf("3. Search Contact\n");
    printf("4. Update Contact\n");
    printf("5. Delete Contact\n");
    printf("6. Save Contacts to File\n");
    printf("7. Exit\n");
}

void addContact() {
    if (contactCount >= MAX_CONTACTS) {
        printf("Contact list is full!\n");
        return;
    }

    Contact newContact;
    newContact.id = nextId++;

    printf("\n=== ADD NEW CONTACT ===\n");

    do {
        printf("Enter First Name: ");
        fgets(newContact.firstName, MAX_NAME_LENGTH, stdin);
        newContact.firstName[strcspn(newContact.firstName, "\n")] = 0;
    } while (strlen(newContact.firstName) == 0);

    do {
        printf("Enter Last Name: ");
        fgets(newContact.lastName, MAX_NAME_LENGTH, stdin);
        newContact.lastName[strcspn(newContact.lastName, "\n")] = 0;
    } while (strlen(newContact.lastName) == 0);

    do {
        printf("Enter Phone Number: ");
        fgets(newContact.phone, MAX_PHONE_LENGTH, stdin);
        newContact.phone[strcspn(newContact.phone, "\n")] = 0;
    } while (!isValidPhone(newContact.phone));

    do {
        printf("Enter Email: ");
        fgets(newContact.email, MAX_EMAIL_LENGTH, stdin);
        newContact.email[strcspn(newContact.email, "\n")] = 0;
    } while (!isValidEmail(newContact.email));

    contacts[contactCount++] = newContact;

    printf("\nContact added successfully! (ID: %d)\n", newContact.id);
    pressEnterToContinue();
}

void displayContacts() {
    if (contactCount == 0) {
        printf("No contacts found.\n");
        pressEnterToContinue();
        return;
    }

    printf("\n=== ALL CONTACTS ===\n");
    printf("%-5s %-15s %-15s %-15s %-30s\n", 
           "ID", "First Name", "Last Name", "Phone", "Email");
    printf("--------------------------------------------------------------------------\n");

    for (int i = 0; i < contactCount; i++) {
        printf("%-5d %-15s %-15s %-15s %-30s\n",
               contacts[i].id,
               contacts[i].firstName,
               contacts[i].lastName,
               contacts[i].phone,
               contacts[i].email);
    }

    printf("Total contacts: %d\n", contactCount);
    pressEnterToContinue();
}

void searchContact() {
    if (contactCount == 0) {
        printf("No contacts to search.\n");
        pressEnterToContinue();
        return;
    }

    int choice;
    char searchTerm[MAX_NAME_LENGTH];
    int found = 0;

    printf("\n=== SEARCH CONTACT ===\n");
    printf("1. Search by First Name\n");
    printf("2. Search by Last Name\n");
    printf("3. Search by Phone\n");
    scanf("%d", &choice);
    clearInputBuffer();

    printf("Enter search term: ");
    fgets(searchTerm, MAX_NAME_LENGTH, stdin);
    searchTerm[strcspn(searchTerm, "\n")] = 0;

    printf("\n--- Search Results ---\n");
    for (int i = 0; i < contactCount; i++) {
        int match = 0;
        if (choice == 1 && strstr(contacts[i].firstName, searchTerm)) match = 1;
        else if (choice == 2 && strstr(contacts[i].lastName, searchTerm)) match = 1;
        else if (choice == 3 && strstr(contacts[i].phone, searchTerm)) match = 1;

        if (match) {
            printf("ID: %d | %s %s | %s | %s\n",
                   contacts[i].id,
                   contacts[i].firstName,
                   contacts[i].lastName,
                   contacts[i].phone,
                   contacts[i].email);
            found = 1;
        }
    }

    if (!found) printf("No contact found.\n");
    pressEnterToContinue();
}

void updateContact() {
    if (contactCount == 0) {
        printf("No contacts to update.\n");
        pressEnterToContinue();
        return;
    }

    int id, index = -1;
    printf("Enter Contact ID to update: ");
    scanf("%d", &id);
    clearInputBuffer();

    for (int i = 0; i < contactCount; i++)
        if (contacts[i].id == id) index = i;

    if (index == -1) {
        printf("Contact not found!\n");
        pressEnterToContinue();
        return;
    }

    Contact *c = &contacts[index];
    char temp[100];

    printf("New First Name [%s]: ", c->firstName);
    fgets(temp, 100, stdin);
    if (strlen(temp) > 1) strcpy(c->firstName, strtok(temp, "\n"));

    printf("New Last Name [%s]: ", c->lastName);
    fgets(temp, 100, stdin);
    if (strlen(temp) > 1) strcpy(c->lastName, strtok(temp, "\n"));

    do {
        printf("New Phone [%s]: ", c->phone);
        fgets(temp, 100, stdin);
        if (strlen(temp) <= 1) break;
        temp[strcspn(temp, "\n")] = 0;
    } while (!isValidPhone(temp));
    if (strlen(temp) > 1) strcpy(c->phone, temp);

    do {
        printf("New Email [%s]: ", c->email);
        fgets(temp, 100, stdin);
        if (strlen(temp) <= 1) break;
        temp[strcspn(temp, "\n")] = 0;
    } while (!isValidEmail(temp));
    if (strlen(temp) > 1) strcpy(c->email, temp);

    printf("Contact Updated Successfully!\n");
    pressEnterToContinue();
}

void deleteContact() {
    if (contactCount == 0) {
        printf("No contacts to delete.\n");
        pressEnterToContinue();
        return;
    }

    int id, index = -1;
    printf("Enter Contact ID to delete: ");
    scanf("%d", &id);
    clearInputBuffer();

    for (int i = 0; i < contactCount; i++)
        if (contacts[i].id == id) index = i;

    if (index == -1) {
        printf("Contact not found!\n");
        pressEnterToContinue();
        return;
    }

    printf("Are you sure? (Y/N): ");
    char confirm;
    scanf(" %c", &confirm);
    clearInputBuffer();

    if (confirm == 'y' || confirm == 'Y') {
        for (int i = index; i < contactCount - 1; i++)
            contacts[i] = contacts[i + 1];
        contactCount--;
        printf("Contact deleted.\n");
    } else {
        printf("Deletion cancelled.\n");
    }

    pressEnterToContinue();
}

void saveContactsToFile() {
    FILE *file = fopen("contacts.dat", "wb");
    if (!file) {
        printf("File write error!\n");
        return;
    }

    fwrite(&contactCount, sizeof(int), 1, file);
    fwrite(&nextId, sizeof(int), 1, file);
    fwrite(contacts, sizeof(Contact), contactCount, file);

    fclose(file);
    printf("Contacts saved successfully!\n");
}

void loadContactsFromFile() {
    FILE *file = fopen("contacts.dat", "rb");
    if (!file) {
        printf("No saved contacts. Fresh start.\n");
        return;
    }

    fread(&contactCount, sizeof(int), 1, file);
    fread(&nextId, sizeof(int), 1, file);
    fread(contacts, sizeof(Contact), contactCount, file);

    fclose(file);
    printf("%d previous contacts loaded.\n", contactCount);
}

int isValidPhone(const char *phone) {
    int digits = 0;
    for (int i = 0; phone[i]; i++)
        if (isdigit(phone[i])) digits++;
        else return 0;
    return digits >= 10 && digits <= 15;
}

int isValidEmail(const char *email) {
    return (strchr(email, '@') && strchr(email, '.'));
}

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void pressEnterToContinue() {
    printf("Press Enter to continue...");
    getchar();
}
