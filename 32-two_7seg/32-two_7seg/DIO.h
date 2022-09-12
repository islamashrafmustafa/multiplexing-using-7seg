void DIO_vsetPINDir(unsigned char portname,unsigned char pinnumber,unsigned char direction);
void DIO_write(unsigned char portname,unsigned char pinnumber,unsigned char outputvalue);
unsigned char DIO_U8read(unsigned char portname,unsigned char pinnumber);
void DIO_toggle(unsigned char portname,unsigned char pinnumber);
void DIO_write_port(unsigned char portname,unsigned char portvalue);
void set_port_direction(unsigned char portname,unsigned char direction);
unsigned char DIO_read_port(unsigned char portname);



