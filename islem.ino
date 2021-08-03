int benimsonucum;
int abenimsonucum;
int bbenimsonucum;
int cbenimsonucum;
int dbenimsonucum;
int zsonuc = 20;
int tbenimsonucum;
int yabenimsonucum;
int abbenimsonucum;
int cabenimsonucum;
int dabenimsonucum;
int qqsonucc = 3;
int kasonucc = 12;
int zasonucc = 25;
int qasonucy = 16;
int wasonucac = 20;
int test;
int sonucc = 35;
int ksonucc = 11;
int zsonucc = 125;
int qsonucy = 16;
int wsonucac = 84;
int tabenimsonucum;
int yaabenimsonucum;
int ababenimsonucum;
int caaabenimsonucum;
int adabenimsonucum;
int wsonuc = 22;
int qsonuc = 41;
int ksonuc = 16;
int sonuc = 23;
int secim;
int secimm;
int secimmm;
int led = 2;
int led2 = 7;
int buzzer = 8;


void setup() {
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.println("M.MERT ve EMRE PROGRAMIMIZA HOŞGELDİNİNZ...");
  Serial.println ("TEST SECİMİ YAPINIZ");
  Serial.println("1.TEST İÇİN = 1");
  Serial.println("2.TEST İÇİN = 9" );
  Serial.println("3.TEST İÇİN = 7" );


}

void loop () {


  secim = Serial.parseInt();
  secimm = Serial.parseInt();

secimmm= Serial.parseInt();


  while (secim == 1) {
    Serial.println("_____________________");
    Serial.println("1.SORU:\n");
    Serial.println("8+15=");
    delay(3000);
    benimsonucum = Serial.parseInt();
    Serial.print("sizin cevabınız : ");
    Serial.println(benimsonucum);
    if (Serial.parseInt() == 23 || benimsonucum == 23) {
      delay(2000);
      digitalWrite(buzzer, LOW);
      digitalWrite(led, HIGH);
      Serial.println(sonuc);
      Serial.println("doğru bildiniz\n");
      Serial.println("+10 puan");
      delay(3000);
      digitalWrite(led2, LOW);
    }
    else {


      Serial.println("yanlış bildiniz\n");
      Serial.println("-10 puan");
      Serial.println("doğru cevap:23");
      digitalWrite(led2, HIGH);
      digitalWrite(buzzer, HIGH);
      digitalWrite(led, LOW);
      delay(3000);

    }



    if (Serial.parseInt() == 0) {
      digitalWrite(buzzer, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led, LOW);


    }



    Serial.println("_____________________");


    Serial.println("2.SORU:\n");
    Serial.println("21-5=");
    delay(3000);
    abenimsonucum = Serial.parseInt();
    Serial.print("sizin cevabınız : ");
    Serial.println(abenimsonucum);
    if (Serial.parseInt() == 16 || abenimsonucum == 16) {
      delay(2000);
      Serial.println(ksonuc);
      delay(2000);
      digitalWrite(buzzer, LOW);
      digitalWrite(led, HIGH);
      //delay(2000);
      Serial.println("doğru bildiniz\n");
      Serial.println("+10 puan");
      delay(3000);
      digitalWrite(led2, LOW);

    }



    else {
      Serial.println("yanlış bildiniz\n");
      Serial.println("-10 puan");
      Serial.println("doğru cevap:16");
      digitalWrite(buzzer, HIGH);
      digitalWrite(led2, HIGH);
      delay(3000);
      digitalWrite(led, LOW);

    }


    if (Serial.parseInt() == 0) {
      digitalWrite(buzzer, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led, LOW);


    }




    Serial.println("_____________________");

    Serial.println("3.SORU:\n");
    Serial.println("45-25=");
    delay(3000);
    bbenimsonucum = Serial.parseInt();
    Serial.print("sizin cevabınız : ");
    Serial.println(bbenimsonucum);
    if (Serial.parseInt() == 20 || bbenimsonucum == 20) {
      delay(2000);
      digitalWrite(buzzer, LOW);
      digitalWrite(led, HIGH);
      Serial.println(zsonuc);
      Serial.println("doğru bildiniz\n");
      Serial.println("+10 puan");
      delay(3000);
      digitalWrite(led2, LOW);
    }
    else {


      Serial.println("yanlış bildiniz\n");
      Serial.println("-10 puan");
      Serial.println("doğru cevap:20");
      digitalWrite(led2, HIGH);
      digitalWrite(buzzer, HIGH);
      digitalWrite(led, LOW);
      delay(3000);

    }



    if (Serial.parseInt() == 0) {
      digitalWrite(buzzer, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led, LOW);


    }



    Serial.println("_____________________");

    Serial.println("4.SORU:\n");
    Serial.println("73-51=");
    delay(3000);
    cbenimsonucum = Serial.parseInt();
    Serial.print("sizin cevabınız : ");
    Serial.println(cbenimsonucum);
    if (Serial.parseInt() == 22 || cbenimsonucum == 22) {
      delay(2000);
      digitalWrite(buzzer, LOW);
      digitalWrite(led, HIGH);
      Serial.println(wsonuc);
      Serial.println("doğru bildiniz\n");
      Serial.println("+10 puan");
      delay(3000);
      digitalWrite(led2, LOW);
    }
    else {


      Serial.println("yanlış bildiniz\n");
      Serial.println("-10 puan");
      Serial.println("doğru cevap:22");
      digitalWrite(led2, HIGH);
      digitalWrite(buzzer, HIGH);
      digitalWrite(led, LOW);
      delay(3000);

    }



    if (Serial.parseInt() == 0) {
      digitalWrite(buzzer, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led, LOW);


    }

    Serial.println("_____________________");


    Serial.println("5.SORU:\n");
    Serial.println("65-24=");
    delay(3000);
    dbenimsonucum = Serial.parseInt();
    Serial.print("sizin cevabınız : ");
    Serial.println(dbenimsonucum);
    if (Serial.parseInt() == 41 || dbenimsonucum == 41) {
      delay(2000);
      digitalWrite(buzzer, LOW);
      digitalWrite(led, HIGH);
      Serial.println(qsonuc);
      Serial.println("doğru bildiniz\n");
      Serial.println("+10 puan");
      delay(3000);
      digitalWrite(led2, LOW);
    }
    else {

      Serial.println("yanlış bildiniz\n");
      Serial.println("-10 puan");
      Serial.println("doğru cevap:41");
      digitalWrite(led2, HIGH);
      digitalWrite(buzzer, HIGH);
      digitalWrite(led, LOW);
      delay(3000);

    }


    if (Serial.parseInt() == 0) {
      digitalWrite(buzzer, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led, LOW);
    }
    Serial.println("2.Teste geçmek ister misiniz??");
    Serial.println("Evet = 9");
    Serial.println("Hayır = 6");
  delay(7000);  
      if (Serial.parseInt() == 6) {
    Serial.println("**************************");
    Serial.println("Program bitmiştir...");
    Serial.println("**************************\n");
    Serial.println("PROGRAMI KULLANDIGINIZ İÇİN TESEKKUR EDERİZ...");
    while (5);
 secim = 0;
  }
  }
  while (secimm == 9) {
    if(Serial.parseInt()==9){

    Serial.println("-----------------");
    Serial.println("2.Program başlatılıyor");
    Serial.println("-----------------");

    Serial.println("_____________________");
    Serial.println("1.SORU:\n");
    Serial.println("7*5=");
    delay(3000);
    tbenimsonucum = Serial.parseInt();
    Serial.print("sizin cevabınız : ");
    Serial.println(tbenimsonucum);
    if (Serial.parseInt() == 35 || tbenimsonucum == 35) {
      delay(2000);
      digitalWrite(buzzer, LOW);
      digitalWrite(led, HIGH);
      Serial.println(sonucc);
      Serial.println("doğru bildiniz\n");
      Serial.println("+10 puan");
      delay(3000);
      digitalWrite(led2, LOW);
    }
    else {


      Serial.println("yanlış bildiniz\n");
      Serial.println("-10 puan");
      Serial.println("doğru cevap:35");
      digitalWrite(led2, HIGH);
      digitalWrite(buzzer, HIGH);
      digitalWrite(led, LOW);
      delay(3000);

    }



    if (Serial.parseInt() == 0) {
      digitalWrite(buzzer, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led, LOW);


    }



    Serial.println("_____________________");


    Serial.println("2.SORU:\n");
    Serial.println("55/5=");
    delay(3000);
    yabenimsonucum = Serial.parseInt();
    Serial.print("sizin cevabınız : ");
    Serial.println(yabenimsonucum);
    if (Serial.parseInt() == 11 || yabenimsonucum == 11) {
      delay(2000);
      Serial.println(ksonucc);
      delay(2000);
      digitalWrite(buzzer, LOW);
      digitalWrite(led, HIGH);
      //delay(2000);
      Serial.println("doğru bildiniz\n");
      Serial.println("+10 puan");
      delay(3000);
      digitalWrite(led2, LOW);

    }



    else {
      Serial.println("yanlış bildiniz\n");
      Serial.println("-10 puan");
      Serial.println("doğru cevap:11");
      digitalWrite(buzzer, HIGH);
      digitalWrite(led2, HIGH);
      delay(3000);
      digitalWrite(led, LOW);

    }


    if (Serial.parseInt() == 0) {
      digitalWrite(buzzer, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led, LOW);


    }

    Serial.println("_____________________");

    Serial.println("3.SORU:\n");
    Serial.println("25*5=");
    delay(3000);
    abbenimsonucum = Serial.parseInt();
    Serial.print("sizin cevabınız : ");
    Serial.println(abbenimsonucum);
    if (Serial.parseInt() == 125 || abbenimsonucum == 125) {
      delay(2000);
      digitalWrite(buzzer, LOW);
      digitalWrite(led, HIGH);
      Serial.println(zsonucc);
      Serial.println("doğru bildiniz\n");
      Serial.println("+10 puan");
      delay(3000);
      digitalWrite(led2, LOW);
    }
    else {


      Serial.println("yanlış bildiniz\n");
      Serial.println("-10 puan");
      Serial.println("doğru cevap:125");
      digitalWrite(led2, HIGH);
      digitalWrite(buzzer, HIGH);
      digitalWrite(led, LOW);
      delay(3000);

    }



    if (Serial.parseInt() == 0) {
      digitalWrite(buzzer, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led, LOW);


    }



    Serial.println("_____________________");

    Serial.println("4.SORU:\n");
    Serial.println("7*12=");
    delay(3000);
    cabenimsonucum = Serial.parseInt();
    Serial.print("sizin cevabınız : ");
    Serial.println(cabenimsonucum);
    if (Serial.parseInt() == 84 || cabenimsonucum == 84) {
      delay(2000);
      digitalWrite(buzzer, LOW);
      digitalWrite(led, HIGH);
      Serial.println(wsonucac);
      Serial.println("doğru bildiniz\n");
      Serial.println("+10 puan");
      delay(3000);
      digitalWrite(led2, LOW);
    }
    else {


      Serial.println("yanlış bildiniz\n");
      Serial.println("-10 puan");
      Serial.println("doğru cevap:84");
      digitalWrite(led2, HIGH);
      digitalWrite(buzzer, HIGH);
      digitalWrite(led, LOW);
      delay(3000);

    }



    if (Serial.parseInt() == 0) {
      digitalWrite(buzzer, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led, LOW);


    }

    Serial.println("_____________________");


    Serial.println("5.SORU:\n");
    Serial.println("64/4=");
    delay(3000);
    dabenimsonucum = Serial.parseInt();
    Serial.print("sizin cevabınız : ");
    Serial.println(dabenimsonucum);
    if (Serial.parseInt() == 16 || dabenimsonucum == 16) {
      delay(2000);
      digitalWrite(buzzer, LOW);
      digitalWrite(led, HIGH);
      Serial.println(qsonucy);
      Serial.println("doğru bildiniz\n");
      Serial.println("+10 puan");
      delay(3000);
      digitalWrite(led2, LOW);
    }
    else {

      Serial.println("yanlış bildiniz\n");
      Serial.println("-10 puan");
      Serial.println("doğru cevap:16");
      digitalWrite(led2, HIGH);
      digitalWrite(buzzer, HIGH);
      digitalWrite(led, LOW);
      delay(3000);

    }


    if (Serial.parseInt() == 0) {
      digitalWrite(buzzer, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led, LOW);
    }
  

  
  delay(3000);
  Serial.println("-----------------");
  Serial.println("3. Teste geçmek istermisin ??\n");
  Serial.println("Evet ise = 7 ");
  Serial.println("Hayır ise = 6");
  Serial.println("Seçmek için 7 sn var");
  delay(7000);
  

  if (Serial.parseInt() == 6) {
    Serial.println("**************************");
    Serial.println("Program bitmiştir...");
    Serial.println("**************************\n");
    Serial.println("PROGRAMI KULLANDIGINIZ İÇİN TESEKKUR EDERİZ...");
    while (5);
  }
 secim = 0;
  }
  }
    while (secimmm == 7) {
    Serial.println("3.Program başlatılıyor");

    Serial.println("-----------------");


      Serial.println("_____________________");
      Serial.println("1.SORU:\n");
      Serial.println("√9=");
      delay(3000);
      tabenimsonucum = Serial.parseInt();
      Serial.print("sizin cevabınız : ");
      Serial.println(tabenimsonucum);
      if (Serial.parseInt() == 3 || tabenimsonucum == 3) {
        delay(2000);
        digitalWrite(buzzer, LOW);
        digitalWrite(led, HIGH);
        Serial.println(qqsonucc);
        Serial.println("doğru bildiniz\n");
        Serial.println("+10 puan");
        delay(3000);
        digitalWrite(led2, LOW);
      }
      else {


        Serial.println("yanlış bildiniz\n");
        Serial.println("-10 puan");
        Serial.println("doğru cevap:3");
        digitalWrite(led2, HIGH);
        digitalWrite(buzzer, HIGH);
        digitalWrite(led, LOW);
        delay(3000);

      }



      if (Serial.parseInt() == 0) {
        digitalWrite(buzzer, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led, LOW);


      }



      Serial.println("_____________________");


      Serial.println("2.SORU:\n");
      Serial.println("√144=");
      delay(3000);
      yaabenimsonucum = Serial.parseInt();
      Serial.print("sizin cevabınız : ");
      Serial.println(yaabenimsonucum);
      if (Serial.parseInt() == 12 || yaabenimsonucum == 12) {
        delay(2000);
        Serial.println(kasonucc);
        delay(2000);
        digitalWrite(buzzer, LOW);
        digitalWrite(led, HIGH);
        //delay(2000);
        Serial.println("doğru bildiniz\n");
        Serial.println("+10 puan");
        delay(3000);
        digitalWrite(led2, LOW);

      }



      else {
        Serial.println("yanlış bildiniz\n");
        Serial.println("-10 puan");
        Serial.println("doğru cevap:12");
        digitalWrite(buzzer, HIGH);
        digitalWrite(led2, HIGH);
        delay(3000);
        digitalWrite(led, LOW);

      }


      if (Serial.parseInt() == 0) {
        digitalWrite(buzzer, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led, LOW);


      }




      Serial.println("_____________________");

      Serial.println("3.SORU:\n");
      Serial.println("√625=");
      delay(3000);
      ababenimsonucum = Serial.parseInt();
      Serial.print("sizin cevabınız : ");
      Serial.println(ababenimsonucum);
      if (Serial.parseInt() == 25 || ababenimsonucum == 25) {
        delay(2000);
        digitalWrite(buzzer, LOW);
        digitalWrite(led, HIGH);
        Serial.println(zasonucc);
        Serial.println("doğru bildiniz\n");
        Serial.println("+10 puan");
        delay(3000);
        digitalWrite(led2, LOW);
      }
      else {


        Serial.println("yanlış bildiniz\n");
        Serial.println("-10 puan");
        Serial.println("doğru cevap:25");
        digitalWrite(led2, HIGH);
        digitalWrite(buzzer, HIGH);
        digitalWrite(led, LOW);
        delay(3000);

      }



      if (Serial.parseInt() == 0) {
        digitalWrite(buzzer, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led, LOW);


      }



      Serial.println("_____________________");

      Serial.println("4.SORU:\n");
      Serial.println("400=");
      delay(3000);
      caaabenimsonucum = Serial.parseInt();
      Serial.print("sizin cevabınız : ");
      Serial.println(caaabenimsonucum);
      if (Serial.parseInt() == 20 || caaabenimsonucum == 20) {
        delay(2000);
        digitalWrite(buzzer, LOW);
        digitalWrite(led, HIGH);
        Serial.println(wasonucac);
        Serial.println("doğru bildiniz\n");
        Serial.println("+10 puan");
        delay(3000);
        digitalWrite(led2, LOW);
      }
      else {


        Serial.println("yanlış bildiniz\n");
        Serial.println("-10 puan");
        Serial.println("doğru cevap:20");
        digitalWrite(led2, HIGH);
        digitalWrite(buzzer, HIGH);
        digitalWrite(led, LOW);
        delay(3000);

      }



      if (Serial.parseInt() == 0) {
        digitalWrite(buzzer, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led, LOW);


      }

      Serial.println("_____________________");


      Serial.println("5.SORU:\n");
      Serial.println("√256=");
      delay(3000);
      adabenimsonucum = Serial.parseInt();
      Serial.print("sizin cevabınız : ");
      Serial.println(adabenimsonucum);
      if (Serial.parseInt() == 16 || adabenimsonucum == 16) {
        delay(2000);
        digitalWrite(buzzer, LOW);
        digitalWrite(led, HIGH);
        Serial.println(qasonucy);
        Serial.println("doğru bildiniz\n");
        Serial.println("+10 puan");
        delay(3000);
        digitalWrite(led2, LOW);
      }
      else {

        Serial.println("yanlış bildiniz\n");
        Serial.println("-10 puan");
        Serial.println("doğru cevap:16");
        digitalWrite(led2, HIGH);
        digitalWrite(buzzer, HIGH);
        digitalWrite(led, LOW);
        delay(3000);

      }


      if (Serial.parseInt() == 0) {
        digitalWrite(buzzer, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led, LOW);
      }
 
  delay(3000);
  Serial.println("-----------------");
  Serial.println("Programı bitirmek için = 6\n");
  delay(5000);
  if (Serial.parseInt() == 6) {
    Serial.println("**************************");
    Serial.println("Program bitmiştir...");
    Serial.println("**************************\n");
    Serial.println("PROGRAMI KULLANDIGINIZ İÇİN TESEKKUR EDERİZ...");
    while (5);
 secim = 0;
    }
    }


}
