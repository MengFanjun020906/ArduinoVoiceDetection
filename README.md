# 一、电路接线
## 声音传感器
|声音传感器引脚| Arduino引脚 |
|--|--|
| VCC | 5V |
| GND | GND |
| OUT | 6 |
## LED
|LED引脚| Arduino引脚 |
|--|--|
| 正极 | 8 |
| GND | GND |

# 二、代码

```c
int val;
int ledpin=8;
int voicepin=6;
void setup() 
{
  Serial.begin(9600);
  pinMode(voicepin,INPUT);
  pinMode(ledpin,OUTPUT);
}
 
void loop()
{
    val = digitalRead(voicepin);
    Serial.println(val); 
    delay(500);
    digitalWrite(ledpin,HIGH);
    if (val == LOW) // no voice
    {
      digitalWrite(ledpin,LOW); // clear led
    } else {
      digitalWrite(ledpin,HIGH); // set led
    }
}
```
如果没声音LED不亮
如果有声音LED亮
