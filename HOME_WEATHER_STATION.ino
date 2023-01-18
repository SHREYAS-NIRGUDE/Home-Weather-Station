 
 #include <Wire.h>   
 #include <DHT.h>  
 DHT dht(3, DHT11); // DHT11 Sensor pin D3   
 void setup()   
 {  
  Serial.begin(9600); // See the connection status in Serial Monitor  
  dht.begin();  
  // Setup a function to be called every second  

 }  
 void loop()  
 {  
  float h = dht.readHumidity();  
  float t = dht.readTemperature();  
  int r = analogRead(A0);    // Rain Drop Sensor Pin A0  
  bool l = digitalRead(4);    // LDR sor Pin D4  
  delay(100); 
  r = map(r, 0, 1023, 100, 0);  
  if (l == 0)  
  {
   Serial.print("LDR Sensor : ");  
   Serial.println("High");  
  }  
  else if (l == 1)   
  {  
   Serial.print("LDR Sensor : ");  
   Serial.println("Low");  
  } 
  
  Serial.print("Temperature : ");  
  Serial.println(t);  
  Serial.print("Humidity : ");  
  Serial.println(h);  
  Serial.print("Rain Sensor : ");  
  Serial.println(r);  
  Serial.println("   " ); 
  delay (1000); 
 }  
 
