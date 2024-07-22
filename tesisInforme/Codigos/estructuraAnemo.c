typedef struct{
	uint16_t Uart;
	uint16_t LED;
	uint32_t BaudRate;
	char Buffer[100];
	char * ptrUartBuffer;
	real32_t DataAnemometer[7];
	real32_t * ptrDataAnemometer;
	sensor_t Sensor;
}amenometerSerialParam_t;
