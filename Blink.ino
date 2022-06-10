
long c;
bool b [27] = <%0,1,0,1,0,1,
                0,0,0,1,1,1,
                0,0,0,1,1,1,
                0,0,0,1,1,1,
                0,0,0%>;

void setup() {
  pinMode(13, 1); //OUTPUT = HIGH = 1;
  pinMode(1, 1);
  pinMode(0, 1);
    
 }



void loop()     
   
   delay(100);  

// digitalWrite(13, !digitalRead(13)); // blink toogle                            
                 
// digitalWrite(13, millis() / 500 % 2); // blink from millis()          

 digitalWrite(random(2), random(2)); // random blink     
        
// digitalWrite(13, analogRead(0) % 2); // better random blink     
      
// digitalWrite(13, c++ % 2); // blink with addition  
    
        
 //c < 100000 ? c++ : c = 0; // long time loop blink (comment delay(100))
 //c < 50000 ? digitalWrite(13, 1) : digitalWrite(13, 0); 
   
       
//PORTB xor_eq _BV(5); // pure c blink from toggle   
      
//digitalWrite(13, b[c < 27 ? c++ : c = 0]); //MORSE CODE blink  
 
        
}//loop




/*
void setup() {
  pinMode(13, OUTPUT);                                      
  cli();     //Disable all interrupt occurring
  WDTCSR = (1 << WDCE) | (1 << WDE); //enable Watchdog interrupt


//WDTCSR = (1 << WDIE);                                //16ms
//WDTCSR = (1 << WDIE) | (1<<WDP0);                    //32ms
//WDTCSR = (1 << WDIE) | (1 << WDP1);                  //64ms
//WDTCSR = (1 << WDIE) | (1 << WDP1) | (1 << WDP0);    //0.125s
//WDTCSR = (1 << WDIE) | (1 << WDP2);                  //0.25s
//WDTCSR = (1 << WDIE) | (1 << WDP2) | (1 << WDP0);    //0.5s
  WDTCSR = (1 << WDIE) | (1 << WDP2) | (1 << WDP1);    //1s
//WDTCSR = (1<<WDIE)| (1<<WDP2) | (1<<WDP1) | (1 << WDP0);// 2s
//WDTCSR = (1<<WDIE)| (1<<WDP3);                       //4s
//WDTCSR = (1 << WDIE) | (1 << WDP3) | (1 << WDP0);    //8s
  
  sei();       //Enable interrupts
}

void loop() {
}


ISR(WDT_vect) {
   digitalWrite(13, !digitalRead(13));           
}





  pinMode(9, OUTPUT);
  pinMode(13, OUTPUT);
    
    
  TCCR1A = 0;      // Reset Timer1A
  TCCR1B = 1101;   // CTC mode && 1024 prescaler                        
  OCR1A = 7812;    // 0.5sec
                   // OCR1A = (time(s) * crystal)/prescaler
     bitSet(TCCR1A, COM1A0); // Toggle pin OC1A (9)
  
  }

void loop()
{
   digitalWrite(13, digitalRead(9));
}

*/
 


 
