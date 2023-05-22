int BASE = 2 ;  // I/O pin connected to the first relay
int NUM = 4;   //total number of all relays
void setup()
{
  for (int i = BASE; i < BASE + NUM; i ++)
  {
    pinMode(i, OUTPUT);   //set digital I/O pin as output
  }
}
void loop()
{
  for (int i = BASE; i < BASE + NUM; i ++)
  {
    digitalWrite(i, LOW);    //set digital I/O pin as ‘low’, i.e. turning off the relay gradually  
 delay(200);        //delay
  }
  for (int i = BASE; i < BASE + NUM; i ++)
  {
    digitalWrite(i, HIGH);    // set digital I/O pin as ‘high’， i.e. turning on the relay gradually    
delay(200);        //delay
  }  
}
