void main() {
    unsigned char units, tens;
    unsigned int count = 0;

    TRISB = 0x00;
    TRISA = 0xFC;
    PORTB = 0x00;
    PORTA = 0x00;

    while (1) {
        units = count % 10;
        tens = count / 10;

        PORTA = 0x01;
        PORTB = units;
        delay_ms(100);

        PORTA = 0x02;
        PORTB = tens;
        delay_ms(100);

        PORTA = 0x00;

        delay_ms(200);
        count++;
        if (count == 100) {
            count = 0;
        }
    }
}
