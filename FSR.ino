void setup() {
  pinMode(A0,INPUT); //pinที่รับต้องเป็นpinที่สามารถรับค่าAnalogได้เท่านั้น
  Serial.begin(9600); //set serialว่าจะให้มันแสดงค่าในช่วงไหน
}

void loop() {
  int val = analogRead(A0);//อ่านค่าที่pin A0ที่ต่ออยู่กับตัว FSR แล้วนำไปเก็บที่ตัวแปล val
  if(val>200){ //เมื่อมีแรงกดเกิน 500 จะแสดงค่าแรงกดขึ้นมา ในmonitor
    Serial.print("pressure = ");
    Serial.println(val);
    delay(500);
  }else{ //ถ้าแรงดันน้อยกว่า500 จะแสดงคำว่า No pressure ในmonitor
    Serial.println("No pressure");
    delay(500);
  }
}
