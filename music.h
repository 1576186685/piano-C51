
//音高，音长，音高，音长
//音高0x00表示休止符，音长0x00表示终止

unsigned char code music[]={
//HBD2U，全曲68字节
0x0D,0x03,0x00,0x01,0x0D,0x04,0x0F,0x08,0x0D,0x08,0x12,0x08,0x11,0x0C,0x00,0x04,
0x0D,0x03,0x00,0x01,0x0D,0x04,0x0F,0x08,0x0D,0x08,0x14,0x08,0x12,0x0C,0x00,0x04,
0x0D,0x03,0x00,0x01,0x0D,0x04,0x19,0x08,0x16,0x08,0x12,0x08,0x11,0x08,0x0F,0x0C,0x00,0x04,
0x17,0x03,0x00,0x01,0x17,0x04,0x16,0x08,0x12,0x08,0x14,0x08,0x12,0x0C,
0x00,0x20,  //此处用于循环播放时的曲间间隔
0x00,0x00,
//梁祝选曲，全曲150字节
0x0F,0x10,	0x12,0x0A,	0x14,0x04,	0x17,0x0A,	0x19,0x04,	0x14,0x04,	0x17,0x04,	0x12,0x08,
0x1D,0x0D,	0x22,0x04,	0x1F,0x04,	0x1D,0x04,	0x1A,0x04,	0x1D,0x04,	0x18,0x14,	0x00,0x04,
0x18,0x0A,	0x1A,0x04,	0x15,0x08,	0x13,0x08,	0x11,0x0A,	0x13,0x04,	0x16,0x08,	0x18,0x08,
0x0E,0x08,	0x16,0x08,	0x13,0x04,	0x11,0x04,	0x13,0x04,	0x16,0x04,	0x11,0x12,	0x00,0x04,
0x1A,0x0A,	0x1D,0x04,	0x15,0x08,	0x18,0x08,	0x13,0x04,	0x16,0x04,	0x11,0x10,	0x00,0x04,
0x0E,0x06,	0x11,0x02,	0x0E,0x08,	0x11,0x06,	0x13,0x02,	0x15,0x04,	0x18,0x04,	0x13,0x10,	0x00,0x04,
0x11,0x04,	0x13,0x04,	0x16,0x08,	0x18,0x04,	0x1D,0x08,	0x1A,0x08,
0x18,0x08,	0x1A,0x04,	0x18,0x04,	0x16,0x08,	0x13,0x04,	0x11,0x04,	0x0E,0x10,	0x16,0x12,	0x00,0x01,
0x13,0x06,	0x16,0x02,	0x13,0x04,	0x11,0x04,
0x0E,0x04,	0x11,0x04,	0x13,0x04,	0x16,0x04,	0x11,0x10,
0x00,0x20,	
0x00,0x00,
//两只蝴蝶，全曲388字节
0x11, 0x04, 	0x0F, 0x04, 	0x11, 0x0C, 	0x00, 0x08, 	0x0F, 0x04, 	0x11, 0x04, 	0x0F, 0x04, 	0x0D, 0x10, 	0x00, 0x04,
0x0A, 0x04, 	0x0D, 0x04, 	0x0F, 0x07, 	0x00, 0x01, 	0x0F, 0x04, 	0x11, 0x04, 	0x0F, 0x04, 	0x0D, 0x04, 	0x0A, 0x04, 	0x0D, 0x04, 	0x08, 0x0C, 	0x00, 0x04,
0x11, 0x04, 	0x0F, 0x04, 	0x11, 0x0C, 	0x00, 0x08, 	0x0F, 0x04, 	0x11, 0x04, 	0x0F, 0x04, 	0x0D, 0x10, 	0x00, 0x04,
0x0A, 0x04, 	0x0D, 0x04, 	0x0F, 0x07, 	0x00, 0x01, 	0x0F, 0x04, 	0x11, 0x04, 	0x0F, 0x04, 	0x0D, 0x04, 	0x0A, 0x04, 	0x0D, 0x04, 	0x0F, 0x0C, 	0x00, 0x04,
0x11, 0x04, 	0x14, 0x04, 	0x14, 0x0C, 	0x00, 0x08, 	0x14, 0x04, 	0x16, 0x04, 	0x14, 0x04, 	0x11, 0x10, 	0x00, 0x04,
0x0F, 0x03, 	0x00, 0x01, 	0x0F, 0x03, 	0x00, 0x01, 	0x0F, 0x07, 	0x00, 0x01, 	0x0F, 0x04, 	0x11, 0x04, 	0x0F, 0x04, 	0x0D, 0x04, 	0x0A, 0x03, 	0x00, 0x01, 	0x0A, 0x04, 	0x0D, 0x03, 	0x00, 0x01, 	0x0D, 0x0C, 	0x00, 0x04,
0x14, 0x03, 	0x00, 0x01, 	0x14, 0x03, 	0x00, 0x01, 	0x16, 0x03, 	0x00, 0x01, 	0x19, 0x04, 	0x18, 0x03, 	0x00, 0x01, 	0x18, 0x04, 	0x16, 0x04, 	0x11, 0x04, 	0x0F, 0x03, 	0x00, 0x01, 	0x0F, 0x04, 	0x11, 0x0C, 	0x00, 0x04,
0x11, 0x03, 	0x00, 0x01, 	0x11, 0x03, 	0x00, 0x01, 	0x14, 0x03, 	0x00, 0x01, 	0x14, 0x04, 	0x16, 0x03, 	0x00, 0x01, 	0x16, 0x07, 	0x00, 0x01, 	0x0A, 0x04, 	0x11, 0x04, 	0x0F, 0x03, 	0x00, 0x01, 	0x0F, 0x0C, 	0x00, 0x04,
0x11, 0x04, 	0x14, 0x03, 	0x00, 0x01, 	0x14, 0x04, 	0x11, 0x04, 	0x14, 0x0C, 	0x00, 0x01,
0x19, 0x08, 	0x18, 0x04, 	0x16, 0x04, 	0x18, 0x04, 	0x11, 0x08, 	0x00, 0x04,
0x16, 0x03, 	0x00, 0x01, 	0x16, 0x04, 	0x18, 0x04, 	0x16, 0x04, 	0x14, 0x04, 	0x11, 0x04, 	0x0F, 0x08, 	0x00, 0x01,
0x11, 0x04, 	0x0F, 0x04, 	0x11, 0x03, 	0x00, 0x01, 	0x11, 0x04, 	0x14, 0x0C, 	0x00, 0x04,
0x14, 0x03, 	0x00, 0x01, 	0x14, 0x03, 	0x00, 0x01, 	0x16, 0x03, 	0x00, 0x01, 	0x19, 0x04, 	0x18, 0x03, 	0x00, 0x01, 	0x18, 0x04, 	0x16, 0x04, 	0x11, 0x04, 	0x0F, 0x03, 	0x00, 0x01, 	0x0F, 0x04, 	0x11, 0x0C, 	0x00, 0x04,
0x11, 0x03, 	0x00, 0x01, 	0x11, 0x03, 	0x00, 0x01, 	0x14, 0x03, 	0x00, 0x01, 	0x14, 0x04, 	0x16, 0x03, 	0x00, 0x01, 	0x16, 0x07, 	0x00, 0x01, 	0x0A, 0x04, 	0x11, 0x04, 	0x0F, 0x03, 	0x00, 0x01, 	0x0F, 0x0C, 	0x00, 0x04,
0x11, 0x04, 	0x14, 0x03, 	0x00, 0x01, 	0x14, 0x04, 	0x11, 0x04, 	0x14, 0x0C, 	0x00, 0x01,
0x19, 0x08, 	0x18, 0x04, 	0x16, 0x04, 	0x18, 0x04, 	0x11, 0x08, 	0x00, 0x04,
0x16, 0x03, 	0x00, 0x01, 	0x16, 0x04, 	0x18, 0x04, 	0x16, 0x04, 	0x14, 0x04, 	0x11, 0x04, 	0x0F, 0x08, 	0x00, 0x01,
0x08, 0x08, 	0x0A, 0x03, 	0x00, 0x01, 	0x0A, 0x04, 	0x0D, 0x10,
0x00, 0x20,
0x00, 0x00,
//Merry Christmas，全曲78字节
0x12,	0x09,	0x17,	0x08,	0x00,	0x01,	0x17,	0x04,	0x19,	0x04,	0x17,	0x04,	0x16,	0x04,	0x14,	0x07,	0x00,	0x01,	0x14,	0x08,	0x00,	0x01,
0x14,	0x09,	0x19,	0x08,	0x00,	0x01,	0x19,	0x04,	0x1B,	0x04,	0x19,	0x04,	0x17,	0x04,	0x16,	0x08,	0x12,	0x08,	0x00,	0x01,		
0x12,	0x09,	0x1B,	0x08,	0x00,	0x01,	0x1B,	0x04,	0x1C,	0x04,	0x1B,	0x04,	0x19,	0x04,	0x17,	0x08,	0x14,	0x08,				
0x12,	0x03,	0x00,	0x01,	0x12,	0x04,	0x14,	0x08,	0x19,	0x08,	0x16,	0x08,	0x17,	0x0A,
0x00,	0x20,
0x00,	0x00,
//铃儿响叮当，全曲208字节
0x14,	0x03,	0x00,	0x01,	0x14,	0x03,	0x00,	0x01,	0x14,	0x08,	0x00,	0x01,								
0x14,	0x03,	0x00,	0x01,	0x14,	0x03,	0x00,	0x01,	0x14,	0x08,	0x00,	0x01,								
0x14,	0x04,	0x17,	0x04,	0x10,	0x06,	0x12,	0x02,	0x14,	0x0C,	0x00,	0x04,								
0x15,	0x03,	0x00,	0x01,	0x15,	0x03,	0x00,	0x01,	0x15,	0x08,	0x00,	0x01,								
0x15,	0x03,	0x00,	0x01,	0x14,	0x03,	0x00,	0x01,	0x14,	0x08,	0x00,	0x01,								
0x14,	0x04,	0x12,	0x03,	0x00,	0x01,	0x12,	0x04,	0x10,	0x04,	0x12,	0x08,	0x17,	0x08,						
0x14,	0x03,	0x00,	0x01,	0x14,	0x03,	0x00,	0x01,	0x14,	0x08,	0x00,	0x01,								
0x14,	0x03,	0x00,	0x01,	0x14,	0x03,	0x00,	0x01,	0x14,	0x08,	0x00,	0x01,								
0x14,	0x04,	0x17,	0x04,	0x10,	0x06,	0x12,	0x02,	0x14,	0x0C,	0x00,	0x04,								
0x15,	0x03,	0x00,	0x01,	0x15,	0x03,	0x00,	0x01,	0x15,	0x08,	0x00,	0x01,								
0x15,	0x03,	0x00,	0x01,	0x14,	0x03,	0x00,	0x01,	0x14,	0x08,	0x00,	0x01,								
0x17,	0x03,	0x00,	0x01,	0x17,	0x04,	0x14,	0x04,	0x12,	0x04,	0x10,	0x0C,	0x00,	0x04,						
																			
0x0B,	0x04,	0x14,	0x04,	0x12,	0x04,	0x10,	0x04,	0x0B,	0x0C,	0x00,	0x04,								
0x0B,	0x04,	0x14,	0x04,	0x12,	0x04,	0x10,	0x04,	0x0D,	0x0C,	0x00,	0x04,								
0x0D,	0x04,	0x15,	0x04,	0x14,	0x04,	0x12,	0x04,	0x17,	0x03,	0x00,	0x01,	0x17,	0x03,	0x00,	0x01,	0x17,	0x03,	0x00,	0x01,
0x17,	0x04,	0x19,	0x04,	0x17,	0x04,	0x14,	0x04,	0x12,	0x04,	0x10,	0x0C,								

0x00,	0x04,
0x00,	0x00
};