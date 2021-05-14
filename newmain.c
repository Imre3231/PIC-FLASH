 #include <xc.h> 
#include "p18f25k80.h"
#include "DELAY.h"
#include "CONFIG.h"

#define LED0            PORTBbits.RB7 
#define LED1            PORTBbits.RB6 


void main()
{
 ADCON1=0; 

 TRISA=0xff;
 TRISB = 0;  
 
   
 
   delay_ms(100);
    
  while(1)
  {
      
   LED0 = 1;  
   delay_ms(150);
   LED0 = 0;  
    
       
   
   
         
   LED1 = 1;  
   delay_ms(150);
   LED1 = 0;  
    
   
      
      
   }

    
      
   
  
      
  }