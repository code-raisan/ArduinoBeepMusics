void setup(){
  pinMode(8, OUTPUT);
  pinMode(9, INPUT);
}

void loop(){
  while(digitalRead(9) == LOW){
    delay(100); 
  }
  
  play(35, 3); // こ
  play(415, 3); // と
  play(515, 3); // ば
  play(65, 3); // を

  play(515, 3); // もっ
  play(35, 3); // と
  play(35, 3); // お
  play(35, 3); // し
  play(35, 3); // え
  play(75, 4); // て

  play(35, 3); // な
  play(415, 3); // つ
  play(515, 3); // が
  play(65, 3); // く

  play(515, 3); // るっ
  play(35, 3); // て
  play(35, 3); // お
  play(35, 3); // し
  play(35, 3); // え
  play(75, 4); // て

  play(35, 3); // ぼ
  play(415, 3); // く
  play(515, 3); // は
  play(65, 3); // え

  delay(3000);
}

void play(int scale, int duration){
  //scaleの10の位が音階、1の位がオクターブ
  //フラット(半音低)は、間に0を挟める
  //シャープ(半音高)は、間に1を挟める
  int d = duration * 100;
  int f = 0;
  switch(scale){
    case 15: //ド
      f = 523;
      break;
    case 25: //レ
      f = 587;
      break;
    case 305: //ミ♭
      f = 622;
      break;
    case 35: //ミ
      f = 659;
      break;
    case 45: //ファ
      f = 698;
      break;
    case 415: //ファ#
      f = 740;
      break;
    case 55: //ソ
      f = 784;
      break;
    case 515: // ソ♯
      f = 831;
      break;
    case 605: //ラ♭
      f = 831;
      break;
    case 65: //ラ
      f = 880;
      break;
    case 705://シ♭
      f = 932;
      break;
    case 75: //シ
      f = 988;
      break;
    case 16: //ド
      f = 1047;
      break;
    case 26: //レ
      f = 1175;
      break;
    case 306: //ミ♭
      f = 1245;
      break;
    default:
      f = 0;
      break;
  }
  
  tone(8,f,d);
  delay(d);
}
