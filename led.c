void main() {
TRISB = 0b11111101;
while(1)
{
PORTB.f1 = 1;
delay_ms(500);
PORTB.f1 = 0;
delay_ms(500);
}
}
