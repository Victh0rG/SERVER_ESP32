

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

  // Conecta ao wi-fi
  wifi.begin(ssid, passord);
  while(wif.status() != WL_CONNECTED){
    Serial.println("Connecting to WiFi")
  }
  Serial.println("Connecting to WiFi")

  
  Serial.print("ESP32 Web Server's IP address: ")
  Serial.println(Wifi.localIP()); // obtem o endereco IP local atribuido ao ESP32 e depois imprime

  // define a rota para o servidor pagina HTML
  server.on("/", HTTP_GET, [](AsyncWebServerRequest* request) {
    Serial.println("ESP32 Web Server: New request received:");  // for debugging
    Serial.println("GET /");        // for debugging
    request->send(200, "text/html", "<html><body><h1>Hello, ESP32!</h1></body></html>");
  });

  // Inicializa o servidor
  server.begin();
}

void loop() {
  // put your main code here, to run repeatedly:

}
