#include <stdio.h>
#include <string.h>

#define MAX 100
//  created by Hari Om
typedef struct
{
    int id;
    char name[50];
    char role[20];
    float amount;
} Record;

void addRecord(Record records[], int *count)
{
    printf("Enter ID: ");
    scanf("%d", &records[*count].id);
    printf("Enter Name: ");
    scanf("%s", records[*count].name);
    printf("Enter Role (student/teacher): ");
    scanf("%s", records[*count].role);
    printf("Enter Amount (fees/salary): ");
    scanf("%f", &records[*count].amount);
    (*count)++;
}

void displayRecords(Record records[], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("ID: %d, Name: %s, Role: %s, Amount: %.2f\n", records[i].id, records[i].name, records[i].role, records[i].amount);
    }
}

void modifyRecord(Record records[], int count)
{
    int id;
    printf("Enter ID of the record to modify: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++)
    {
        if (records[i].id == id)
        {
            printf("Enter New Name: ");
            scanf("%s", records[i].name);
            printf("Enter New Role (student/teacher): ");
            scanf("%s", records[i].role);
            printf("Enter New Amount (fees/salary): ");
            scanf("%f", &records[i].amount);
            return;
        }
    }
    printf("Record not found!\n");
}

void deleteRecord(Record records[], int *count)
{
    int id, found = 0;
    printf("Enter ID of the record to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < *count; i++)
    {
        if (records[i].id == id)
        {
            for (int j = i; j < *count - 1; j++)
            {
                records[j] = records[j + 1];
            }
            (*count)--;
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Record not found!\n");
    }
}

void searchRecord(Record records[], int count)
{
    int id;
    printf("Enter ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++)
    {
        if (records[i].id == id)
        {
            printf("ID: %d, Name: %s, Role: %s, Amount: %.2f\n", records[i].id, records[i].name, records[i].role, records[i].amount);
            return;
        }
    }
    printf("Record not found!\n");
}

int main()
{
    Record records[MAX];
    int count = 0;
    int choice;

    while (1)
    {
        printf("\nSchool Billing System\n");
        printf("1. Add Record\n");
        printf("2. Display Records\n");
        printf("3. Modify Record\n");
        printf("4. Delete Record\n");
        printf("5. Search Record\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addRecord(records, &count);
            break;
        case 2:
            displayRecords(records, count);
            break;
        case 3:
            modifyRecord(records, count);
            break;
        case 4:
            deleteRecord(records, &count);
            break;
        case 5:
            searchRecord(records, count);
            break;
        case 6:
            return 0;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
