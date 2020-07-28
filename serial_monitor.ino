//code for part seven of my arduino tutorial: https://lacklusterstudios.blogspot.com/2020/07/arduinot-tutorial-serial-monitor.html
//reads a value from a phototransistor and turns on an LED when it is dark. Displays the value of phototransistor to the Serial Monitor.
//licensed under GPL 3.0
//Author: chris nichols (github/rteturn5)


#define LIGHTPIN A1    //pin which will read the value of the phototransistor
#define LEDPIN 5      //pin which will turn on/off the LED
void setup() {
  pinMode(LEDPIN,OUTPUT);  //set LEDPIN to be an output
  Serial.begin(9600);     //start Serial with 9600 baud rate

}

void loop() {
    int light = analogRead(LIGHTPIN);   //read the value of the phototransistor. store that value inside of 'light'
    Serial.print("light level is: ");   //print to serial monitor
    Serial.println(light);             //print value of 'light' to serial monitor, then print new line
    if(light < 1) {                    //if value read from phototransistor is less than 1
      digitalWrite(LEDPIN,HIGH);       //turn on LED
      Serial.println("Led is on");     //print message to serial monitor.
    }
    else {
      digitalWrite(LEDPIN,LOW);  //otherwise, turn off LED
    }
}
