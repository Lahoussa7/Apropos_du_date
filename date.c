#include <stdio.h>
#include <stdlib.h>
int main(){
	int day,mois,ans;
	int jd,md,ansd;
	printf("entrez la date d'aujourd'hui pour savoir ceux de demain:  ");
	scanf("%d/""%d/""%d",&day,&mois,&ans);
	md=mois;
	ansd=ans;
	if(md==mois && ansd==ans){
	jd=day+1;   
       if(((mois<=7 && mois%2==1) ||(mois>7 && mois%2==0))){
           if(day==31){
		      md=mois+1;
		      jd=1;
		      ansd=ans;
		      if(mois==12){
			     md=(mois+1)-mois;
			     ansd=ans+1;
		      }
	       }
    
        }
     }
     
     if(((mois<=7 && mois%2==0) ||(mois>7 && mois%2==1))){
	    if(day==30){
		   md=mois+1;
		   jd=1;
	       ansd=ans;
         }
        if(ans%4==0 || ans%100==0){
	      if(mois==2){
		     if(day==29){
			   md=mois+1;
			   jd=01;
			   ansd=ans;
		     }
	      }
       }
      else{
	      if(mois==2){
		     if(day==28){
			      md=mois+1;
			      jd=01;
			      ansd=ans;
		       }
	         }
         }
     }
	printf("la date d'aujourd'hui %02d/%02d/%02d et et la date de demain %02d/%02d/%02d\n",day,mois,ans,jd,md,ansd);
	return 0;
}
