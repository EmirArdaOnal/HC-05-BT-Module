# HC-05-BT-Module
HC-05 BT Module how to using
HC-05 Bluetooth modülünün RX (Receive) ve TX (Transmit) uçlarını Arduino kartınıza bağlamanız gerekmektedir. HC-05 modülü, Arduino kartı ile haberleşmek için UART (Universal Asynchronous Receiver-Transmitter) protokolünü kullanır.

Bağlantıyı gerçekleştirmek için aşağıdaki adımları izleyebilirsiniz:

Arduino kartınızın RX pini (Receive) ile HC-05 modülünün TX pini (Transmit) arasında bir bağlantı yapın.
Arduino kartınızın TX pini (Transmit) ile HC-05 modülünün RX pini (Receive) arasında bir bağlantı yapın.
HC-05 modülünün VCC pini 5V güç kaynağına bağlanmalıdır.
HC-05 modülünün GND pini Arduino kartınızın GND pinine bağlanmalıdır.
Arduino kartınızı bilgisayara bağlayın ve kodu yükleyin.



```int ledPin = 13;``` ve ```char receivedChar; ``` satırları değişkenleri tanımlar. ledPin, LED'in bağlı olduğu Arduino pinini temsil eder ve receivedChar, HC-05 modülünden gelen karakteri depolamak için kullanılır.

 ```void setup() ``` fonksiyonu, Arduino kartı başlatıldığında bir kez çalıştırılır. Bu fonksiyonda aşağıdaki işlemler gerçekleştirilir:

 ```pinMode(ledPin, OUTPUT); ``` ile ledPin belirtilen pin çıkış moduna ayarlanır, yani LED kontrol pininin bir çıkış olduğu belirtilir.
 ```Serial.begin(9600); ``` ile seri iletişim başlatılır. Bu, Arduino'nun HC-05 modülüyle iletişim kurması için seri bağlantı hızını (baud rate) belirtir. Bu örnekte 9600 baud kullanılmıştır.
 ```void loop() ``` fonksiyonu, Arduino kartı başlatıldıktan sonra sürekli olarak tekrarlanır. Bu fonksiyonda aşağıdaki işlemler gerçekleştirilir:

 ```if (Serial.available()) ``` ile seri bağlantı üzerinde gelen veri kontrol edilir. Eğer bir veri varsa, içerideki bloğa girilir.
 ```receivedChar = Serial.read(); ``` ile HC-05 modülünden gelen karakter receivedChar değişkenine atanır.
 ```if (receivedChar == 'a') ``` ile alınan karakterin "a" olup olmadığı kontrol edilir.
Eğer alınan karakter "a" ise, içerideki bloğa girilir.
 ```digitalWrite(ledPin, HIGH); ``` ile LED'in bağlı olduğu pin yüksek (HIGH) seviyeye ayarlanır ve LED yanar.
 ```delay(1000); ``` ile 1 saniye beklendi.
 ```digitalWrite(ledPin, LOW); ``` ile LED'in bağlı olduğu pin düşük (LOW) seviyeye ayarlanır ve LED söner.
 ```delay(1000); ``` ile 1 saniye beklendi.
 ```loop() ``` fonksiyonunun sonuna gelindiğinde, tekrar başa dönülerek döngü devam eder.
