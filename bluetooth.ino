int m1a = 8;

int m1b = 9;

int m2a = 10;

int m2b = 11;

char val;



void setup() 

{  

pinMode(m1a,OUTPUT);  

pinMode(m1b, OUTPUT);  

pinMode(m2a, OUTPUT);  

pinMode(m2b, OUTPUT);  

Serial.begin(9600);

}



void loop()

{

  while (Serial.available() > 0)

  {

  val = Serial.read();

  Serial.println(val);

  }



  if( val == 'F') // Forward

    {

      digitalWrite(m1a, HIGH);

      digitalWrite(m1b, LOW);

      digitalWrite(m2a, HIGH);

      digitalWrite(m2b, LOW);  

    }

  else if(val == 'B') // Backward

    {

      digitalWrite(m1a, LOW);

      digitalWrite(m1b, HIGH);

      digitalWrite(m2a, LOW);

      digitalWrite(m2b, HIGH); 

    }

  

    else if(val == 'L') //Left

    {

    digitalWrite(m1a, LOW);

    digitalWrite(m1b, LOW);

    digitalWrite(m2a, HIGH);

    digitalWrite(m2b, LOW);

    }

    else if(val == 'R') //Right

    {

    digitalWrite(m1a, HIGH);

    digitalWrite(m1b, LOW);

    digitalWrite(m2a, LOW);

    digitalWrite(m2b, LOW); 

    }

    

  else if(val == 'S') //Stop

    {

    digitalWrite(m1a, LOW);

    digitalWrite(m1b, LOW);

    digitalWrite(m2a, LOW);

    digitalWrite(m2b, LOW); 

    }

 

  else if(val == 'J') //Backward Right

    {

    digitalWrite(m1a, LOW);

    digitalWrite(m1b, HIGH);

    digitalWrite(m2a, LOW);

    digitalWrite(m2b, LOW);

    }

  

  else if(val == 'H') //Backward Left

    {

    digitalWrite(m1a, LOW);

    digitalWrite(m1b, LOW);

    digitalWrite(m2a, LOW);

    digitalWrite(m2b, HIGH); 

    }

}
