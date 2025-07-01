#include <ESP8266WiFi.h>
#include <ThingESP.h>

char ssid[] = "project"; // Type your wifi name
char pass[] = "123456789";   // Type your wifi password



ThingESP8266 thing("kevinroshan146", "homeautomation", "project1");


#define Light1 D1
#define Light2 D2
#define Light3 D5
#define Light4 D6


boolean stat1 = HIGH;
boolean stat2 = HIGH;
boolean stat3 = HIGH;
boolean stat4 = HIGH;

void setup()
{
  Serial.begin(115200);
  Serial.println("");
  pinMode(Light1, OUTPUT);
  pinMode(Light2, OUTPUT);
  pinMode(Light3, OUTPUT);
  pinMode(Light4, OUTPUT);
  digitalWrite(Light1, stat1);
  digitalWrite(Light2, stat2);
  digitalWrite(Light3, stat3);
  digitalWrite(Light4, stat4);
  thing.SetWiFi(ssid, pass);
  thing.initDevice();
}



void loop()
{
  thing.Handle();
}


String HandleResponse(String query)
{

  if (query == "light 1 on")     {
    digitalWrite(Light1, !stat1);
    return "Done: Light 1 Turned ON";
  }
  else  if (query == "light 1 off")    {
    digitalWrite(Light1, stat1);
    return "Done: Light 1 Turned OFF";
  }
  else  if (query == "light 2 on")     {
    digitalWrite(Light2, !stat2);
    return "Done: Light 2 Turned ON";
  }
  else  if (query == "light 2 off")    {
    digitalWrite(Light2, stat2);
    return "Done: Light 2 Turned OFF";
  }
  else  if (query == "light 3 on")     {
    digitalWrite(Light3, !stat3);
    return "Done: Light 3 Turned ON";
  }
  else  if (query == "light 3 off")    {
    digitalWrite(Light3, stat3);
    return "Done: Light 3 Turned OFF";
  }
  else  if (query == "light 4 on")     {
    digitalWrite(Light4, !stat4);
    return "Done: Light 4 Turned ON";
  }
  else  if (query == "light 4 off")    {
    digitalWrite(Light4, stat4);
    return "Done: Light 4 Turned OFF";
  }

  else  if (query == "status")
  {
    String msg;
    msg  = digitalRead(Light1) ? "Light 1 is OFF" : "Light 1 is ON";
    msg = msg + "\r\n";
    msg  = msg + String(digitalRead(Light2) ? "Light 2 is OFF" : "Light 2 is ON");
    msg = msg + "\r\n";
    msg  = msg + String(digitalRead(Light3) ? "Light 3 is OFF" : "Light 3 is ON");
    msg = msg + "\r\n";
    msg  = msg + String(digitalRead(Light4) ? "Light 4 is OFF" : "Light 4 is ON");
    return msg;
  }

  else
    return "Your query was invalid..";
}
