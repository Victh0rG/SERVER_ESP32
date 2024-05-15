

// bibliotecas para conexao wifi e criacao do servidor
#include <Wifi.h>
#include <ESPAsyncWebServer.h>

// criacao constantes para a conexao com o wifi
const char* ssid = "Empresa"; 
const char* password = "senhafoda";

// cria objeto AsyncWebServer na porta 80
AsyncWebServer server(80);

void setup() {
  // put your setup code here, to run once:
  // inicializa com uma faixa de 9600
  Serial.begin(9600);

  wifi.begin(ssid, passord);
}

void loop() {
  // put your main code here, to run repeatedly:

}
