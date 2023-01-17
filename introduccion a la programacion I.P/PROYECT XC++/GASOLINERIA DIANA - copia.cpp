# include <stdio.h>
main(){
	
	float tn,tb,d,lt;
	char op;
	
	printf("\t\t QUE TPO DE  GASOLINA CONSUMIRA.\n\nFavor de poner la inicial con mayuscula \n\n M=Magna o P=Premium: ");
	scanf("%c" ,& op);
	
	switch(op){
		
		case 'M':
		
		printf("\n CUANTOS LITROS  CONSUMIRA\n");
		scanf("%f", & lt);
		
		
		if (lt>=1 && lt<=20){
		
		
		
		tb=lt*13.57;
		
		d= tb*.05;
		
		tn=tb-d;
		
		printf("\n EL  TOTAL A  PAGAR: %.0f\n" , tn);
		printf("\n EL  DESCUENTO  ES  DE : %.0f\n" ,d);
		printf("\n EL  TOTAL  BRUTO ES  DE :%.0f\n",tb);}
		
		if (lt>20 && lt<=50){
		
		
		
		tb=lt*13.57;
		
		d= tb*.07;
		
		tn=tb-d;
		
		
		printf("\n EL  TOTAL A  PAGAR: %f" ,tn);
		printf("\n EL  DESCUENTO  ES  DE : % f" ,d);
		printf("\n  EL  TOTAL  BRUTO ES  DE :% f",tb);}
		
		
		
		if (lt>50){
		
		
		
		tb=lt*13.57;
		
		d= tb*.09;
		
		tn=tb-d;
		
		printf("\n EL  TOTAL A  PAGAR: %f" ,tn);
		printf("\n EL  DESCUENTO  ES  DE : % f" ,d);
		printf("\n  EL  TOTAL  BRUTO ES  DE :% f",tb);}
	   
		break;
		
		
		
		case 'P':
		
		printf("\n CUANTOS LITROS  CONSUMIRA\n");
		scanf("%f", & lt);
		
		
		if (lt>=1 && lt<=20){
		
		
		
		tb=lt*14.10;
		
		d= tb*.05;
		
		tn=tb-d;
		
		printf("\n EL  TOTAL A  PAGAR: %f" ,tn);
		printf("\n EL  DESCUENTO  ES  DE : % f" ,d);
		printf("\n  EL  TOTAL  BRUTO ES  DE :% f",tb);}
		
		
		
		if(lt>20 && lt<=50){
		
		
		
		tb=lt*14.10;
		
		d= tb*.07;
		
		tn=tb-d;
		
		printf("\n EL  TOTAL A  PAGAR: %f" ,tn);
		printf("\n EL  DESCUENTO  ES  DE : % f" ,d);
		printf("\n  EL  TOTAL  BRUTO ES  DE :% f",tb);}
		
		
		if (lt>50){
		
		
		
		tb=lt*14.10;
		
		d= tb*.09;
		
		tn=tb-d;
		
		printf("\n EL  TOTAL A  PAGAR: %f" ,tn);
		printf("\n EL  DESCUENTO  ES  DE : % f" ,d);
		printf("\n  EL  TOTAL  BRUTO ES  DE :% f",tb);}
		break;
	}
		fflush(stdin);
		getchar();
		

		
		

	
}
