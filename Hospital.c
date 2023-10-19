#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 30

typedef struct patient {
	char name[50];
	char date[50];
	char address[50];
	char clinic[50];
	char doctor[50];
	char disease[50];
	char drug[50];
	char status[50];
	int age, price;
}patient;

patient* stack1[MAX];
patient* stack2[MAX];
patient* stack3[MAX];
patient* stack4[MAX];
patient* stack5[MAX];
patient* stack6[MAX];
patient* stack7[MAX];
patient* stack8[MAX];
patient* stack9[MAX];
int size1,size2,size3,size4,size5,size6,size7,size8,size9;

void listDoctor() {
	printf("\nClinic = Doctor's name\n");
	printf("Dental Clinic : \n");
    printf("1. Doctor Ivan\n");
    printf("2. Doctor Sam\n");
	printf("Pediatric Clinic : \n");
    printf("1. Doctor Kevin\n");
    printf("2. Doctor Mike\n");
	printf("Orthopedic Clinic : \n");
    printf("1. Doctor Darwin\n");
    printf("2. Doctor Amelia\n");
	printf("Cardiology Clinic : \n");
    printf("1. Doctor Budi\n");
    printf("2. Doctor Putri\n\n");
}

void Registration() {
		
		int age;	
		char name[50], address[50], date[50], clinic[50], doctor[50];
		printf("Input Patient's Name : ");
		scanf("%s", name); getchar();
		printf("Input Patient's Address : ");
		scanf("%[^\n]", address); getchar();
		printf("Input Patient's Birth Date : ");
		scanf("%[^\n]", date); getchar();
		printf("Input Patient's Age : ");
		scanf("%d", &age);
		printf("Clinic : ");
		scanf("%s", clinic); getchar();
		printf("Doctor's Name : ");
		scanf("%s", doctor); getchar();
			
		if(strcmp(doctor, "ivan") == 0) {
			patient* queue1 = (patient*) malloc(sizeof(patient*));
			strcpy(queue1->name, name);
			strcpy(queue1->address, address);
			strcpy(queue1->date, date);
			queue1->age = age;
			strcpy(queue1->clinic, clinic);
			strcpy(queue1->doctor, doctor);
			stack1[size1] = queue1;
			size1++;	
		} else if(strcmp(doctor, "sam") == 0) {
			patient* queue2 = (patient*) malloc(sizeof(patient*));
			strcpy(queue2->name, name);
			strcpy(queue2->address, address);
			strcpy(queue2->date, date);
			queue2->age = age;
			strcpy(queue2->clinic, clinic);
			strcpy(queue2->doctor, doctor);
			stack2[size2] = queue2;
			size2++;
		} else if(strcmp(doctor, "kevin") == 0) {
			patient* queue3 = (patient*) malloc(sizeof(patient*));
			strcpy(queue3->name, name);
			strcpy(queue3->address, address);
			strcpy(queue3->date, date);
			queue3->age = age;
			strcpy(queue3->clinic, clinic);
			strcpy(queue3->doctor, doctor);
			stack3[size3] = queue3;
			size3++;
		} else if(strcmp(doctor, "mike") == 0) {
			patient* queue4 = (patient*) malloc(sizeof(patient*));
			strcpy(queue4->name,name);
			strcpy(queue4->address, address);
			strcpy(queue4->date, date);
			queue4->age = age;
			strcpy(queue4->clinic, clinic);
			strcpy(queue4->doctor, doctor);
			stack4[size4] = queue4;
			size4++;
		}else if(strcmp(doctor, "darwin") == 0) {
			patient* queue5 = (struct patient*) malloc(sizeof(patient*));
			strcpy(queue5->name, name);
			strcpy(queue5->address, address);
			strcpy(queue5->date, date);
			queue5->age = age;
			strcpy(queue5->clinic, clinic);
			strcpy(queue5->doctor, doctor);
			stack5[size5] = queue5;
			size5++;
		} else if(strcmp(doctor, "amelia") == 0) {
			patient* queue6 = (patient*) malloc(sizeof(patient*));
			strcpy(queue6->name, name);
			strcpy(queue6->address, address);
			strcpy(queue6->address, date);
			queue6->age = age;
			strcpy(queue6->clinic, clinic);
			strcpy(queue6->doctor, doctor);
			stack6[size6] = queue6;
			size6++;
		} else if(strcmp(doctor, "budi") == 0) {
			patient* queue7 = (patient*) malloc(sizeof(patient*));
			strcpy(queue7->name, name);
			strcpy(queue7->address, address);
			strcpy(queue7->date, date);
			queue7->age = age;
			strcpy(queue7->clinic, clinic);
			strcpy(queue7->doctor, doctor);
			stack7[size7] = queue7;
			size7++;
		} else if(strcmp(doctor, "putri") == 0) {
			patient* queue8 = (patient*) malloc(sizeof(patient*));
			strcpy(queue8->name, name);
			strcpy(queue8->address, address);
			strcpy(queue8->date, date);
			queue8->age = age;
			strcpy(queue8->clinic, clinic);
			strcpy(queue8->doctor, doctor);
			stack8[size8] = queue8;
			size8++;
		}
		printf("THANK YOU FOR REGIRSTRATION\n\n");
	}

void ClinicQueue() {
	int i=0;
	printf("Dr.Ivan : \n");
	for(i = 0; i < size1; i++) {
		printf("%d. ", i+1);
		printf("Name : %s\n Address : %s\n Birth Date : %s\n Age : %d\n\n", stack1[i]->name, stack1[i]->address, stack1[i]->date, stack1[i]->age);
	}
	printf("Dr.Sam : \n");
	for(i = 0; i < size2; i++) {
		printf("%d. ", i+1);
		printf("Name : %s\n Address : %s\n Birth Date : %s\n Age : %d\n\n", stack2[i]->name, stack2[i]->address, stack2[i]->date, stack2[i]->age);
	}
	printf("Dr.Kevin : \n");
	for(i = 0; i < size3; i++) {
		printf("%d. ",i+1);
		printf("Name : %s\n Address : %s\n Birth Date : %s\n Age : %d\n\n", stack3[i]->name, stack3[i]->address, stack3[i]->date, stack3[i]->age);
	}
	printf("Dr.Mike : \n");
	for(i = 0; i < size4; i++) {
		printf("%d. ",i+1);
		printf("Name : %s\n Address : %s\n Birth Date : %s\n Age : %d\n\n", stack4[i]->name, stack4[i]->address, stack4[i]->date, stack4[i]->age);
	}
	printf("Dr.Darwin : \n");
	for(i = 0; i < size5; i++) {
		printf("%d. ",i+1);
		printf("Name : %s\n Address : %s\n Birth Date : %s\n Age : %d\n\n", stack5[i]->name, stack5[i]->address, stack5[i]->date, stack5[i]->age);
	}
	printf("Dr.Amelia : \n");
	for(i = 0; i < size6; i++) {
		printf("%d. ",i+1);
		printf("Name : %s\n Address : %s\n Birth Date : %s\n Age : %d\n\n", stack6[i]->name, stack6[i]->address, stack6[i]->date, stack6[i]->age);
	}
	printf("Dr.Budi : \n");
	for(i = 0; i < size7; i++) {
		printf("%d. ",i+1);
		printf("Name : %s\n Address : %s\n Birth Date : %s\n Age : %d\n\n", stack7[i]->name, stack7[i]->address, stack7[i]->date, stack7[i]->age);
	}
	printf("Dr.Putri : \n");
	for(i = 0; i < size8; i++) {
		printf("%d. ",i+1);
		printf("Name : %s\n Address : %s\n Birth Date : %s\n Age : %d\n\n", stack8[i]->name, stack8[i]->address, stack8[i]->date, stack8[i]->age);
	}
}

void OutPatient() {
	char doctor[50];
	int i;
	patient* queue9 = (patient*) malloc(sizeof(patient*));
	printf("Queue from doctor : ");
	scanf("%s", doctor); getchar();
	if(strcmp(doctor, "ivan") == 0) {
		strcpy(queue9->name , stack1[0]->name);
		for(i=0;i< size1-1;i++) {
			stack1[i] = stack1[i+1];
		}
		stack1[i] = NULL;
		size1--;
	} else if(strcmp(doctor, "sam") == 0) {
		strcpy(queue9->name , stack2[0]->name);
		for(i=0;i< size2-1;i++) {
			stack2[i] = stack2[i+1];
		}
		stack2[i] = NULL;
		size2--;
	} else if(strcmp(doctor, "kevin") == 0) {
		strcpy(queue9->name , stack3[0]->name);
		for(i=0;i< size3-1;i++) {
			stack3[i] = stack3[i+1];
		}
		stack3[i] = NULL;
		size3--;
	} else if(strcmp(doctor, "mike") == 0) {
		strcpy(queue9->name , stack4[0]->name);
		for(i=0;i< size4-1;i++) {
			stack4[i] = stack4[i+1];
		}
		stack4[i] = NULL;
		size4--;
	} else if(strcmp(doctor, "darwin") == 0) {
		strcpy(queue9->name , stack5[0]->name);
		for(i=0;i< size5-1;i++) {
			stack5[i] = stack5[i+1];
		}
		stack5[i] = NULL;
		size5--;	
	} else if(strcmp(doctor, "amelia") == 0) {
		strcpy(queue9->name , stack6[0]->name);
		for(i=0;i< size6-1;i++) {
			stack6[i] = stack6[i+1];
		}
		stack6[i] = NULL;
		size6--;
	} else if(strcmp(doctor, "budi") == 0) {
		strcpy(queue9->name , stack6[0]->name);
		for(i=0;i< size7-1;i++) {
			stack7[i] = stack7[i+1];
		}
		stack7[i] = NULL;
		size7--;
	} else if(strcmp(doctor, "putri") == 0) {
		strcpy(queue9->name , stack8[0]->name);
		for(i=0;i< size8-1;i++) {
			stack8[i] = stack8[i+1];
		}
		stack8[i] = NULL;
		size8--;
	}

	int price;
	char disease[50];
	char drug[50];
	char status[50];
	char name[50];

	printf("Name : ");
	scanf("%[^\n]", name); getchar();
	printf("Disease : ");
	scanf("%[^\n]", disease); getchar();
	printf("Drug : ");
	scanf("%[^\n]", drug); getchar();
	printf("Price of Drug : ");
	scanf("%d", &price);
	printf("Do you have Insurance? ");
	scanf("%s", status );getchar();
	
	strcpy(queue9->disease, disease);
	strcpy(queue9->drug, drug);
	queue9->price = price;
	strcpy(queue9->status, status);
	stack9[size9] = queue9;
	size9++;
}

void PharmacyQueue() {
	int i;
	for(i = 0; i < size9; i++) {
		printf("%d. ",i+1);
		printf("Name : %s\n Desease : %s\n Drug : %s\n Price : %d\n Status : %s\n", stack9[i]->name, stack9[i]->disease, stack9[i]->drug, stack9[i]->price, stack9[i]->status);
	}
}

void DrugTaken() {
	int i;
	for(i = 0; i < size9; i++) {
		printf("%d. ",i+1);
		printf("Name : %s\n Drug : %s\n Price of the Drug : %d\n", stack9[i]->name, stack9[i]->drug, stack9[i]->price);
	}
}
	
void Payment() {
	int choice = 0;
	printf("1. Dental Clinic = Dr.Ivan , Dr.Sam\n");
	printf("2. Pediatric Clinic = Dr.Kevin , Dr.Mike\n");
	printf("3. Orthopedic Clinic = Dr.Darwin , Dr.Amelia\n");
	printf("4. Cardiology Clinic = Dr.Budi , Dr.Putri\n\n");
	printf("Choose the Clinic : ");
	scanf("%d", &choice);
	if(choice == 1) {
		printf("Clinic's Services : 500.000\n");
		printf("Administration : 50.000\n");
		printf("Price of the Drug is %d\n", stack9[0]->price);
		printf("Total bill is %d\n", 500000 + 50000 + stack9[0]->price);
	} else if(choice == 2) {
		printf("Clinic's Services : 400.000\n");
		printf("Administration : 50.000\n");
		printf("Price of the Drug is %d\n", stack9[0]->price);
		printf("Total bill is %d\n", 400000 + 50000 + stack9[0]->price);		
	} else if(choice == 3) {
		printf("Clinic's Services : 700.000\n");
		printf("Administration : 50.000\n");
		printf("Price of the Drug is %d\n", stack9[0]->price);
		printf("Total bill is %d\n", 700000 + 50000 + stack9[0]->price);
	} else if(choice == 4) {
		printf("Clinic's Services : 1.000.000\n");
		printf("Administration : 50.000\n");
		printf("Price of the Drug is %d\n", stack9[0]->price);
		printf("Total bill is %d\n", 1000000 + 50000 + stack9[0]->price);
	}

	if(strcmp(stack9[0]->status,"yes") == 0) {
		printf("The Costs Are Covered by Insurance\n");
	}
	int i;
	for(i = 0; i < size9 - 1; i++){
			stack9[i] = stack9[i+1];
		}
		stack9[i] = NULL;
		size9--;

    printf("\n\n - - - THANK YOU - - - \n");


    FILE *fp;
	fp = fopen("DATAPATIENT.txt", "a");
		fprintf(fp, "%s#%s#%s#%d#%s\n", stack9[i]->name, stack9[i]->address, stack9[i]->date, stack9[i]->age, stack9[i]->disease);
		fclose(fp);
}

int main() {
	int MENU=0;
	do{
	printf("\n\nWELCOME TO QUEUE APPLICATION\n\n");
	printf("1. LIST DOCTOR\n");
	printf("2. REGISTRATION\n");
	printf("3. CLINIC QUEUE\n");
	printf("4. OUTPATIENT\n");
	printf("5. PHARMACY QUEUE\n");
	printf("6. DRUG TAKEN\n");
	printf("7. PAYMENT\n");
	printf("0. EXIT\n");
	printf("Choose >> ");
	scanf("%d", &MENU);
	switch (MENU) {
		case 1 :
		listDoctor();
		break;

		case 2 :
		Registration();
		break;

		case 3 :
		ClinicQueue();
		break;

		case 4 :
		OutPatient();
		break;

		case 5 :
		PharmacyQueue();
		break;

		case 6 :
		DrugTaken();
		break;

		case 7 :
		Payment();
		break;
	}
	
	}while (MENU !=0);
	
	printf("Thank you\n");
	return 0;
}
