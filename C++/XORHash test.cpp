#include <bits/stdc++.h>

	const unsigned char XORTable1[256] = {
        0xa3, 0x9c, 0xd1, 0xee, 0x65, 0x15, 0x6b, 0x62, 0x65, 0x91, 0x45, 0xcd, 0x9f, 0x57, 0x32, 0x2d, 
		0xc8, 0xf0, 0x1d, 0x7c, 0x47, 0xd , 0x6e, 0xfb, 0x47, 0x74, 0xfd, 0xe4, 0x4e, 0xff, 0xa4, 0x52, 
		0xd7, 0x26, 0x26, 0xb8, 0xc7, 0xe , 0xa7, 0x4e, 0x2b, 0x72, 0x4 , 0x9a, 0xdf, 0x95, 0x57, 0x45, 
		0x3e, 0xa1, 0x29, 0x75, 0x32, 0x50, 0x28, 0x3 , 0x7a, 0x46, 0x60, 0x4c, 0xd6, 0xe8, 0x4f, 0xf5, 
		0xc4, 0x7 , 0xfa, 0x5b, 0x62, 0xd4, 0x28, 0x6b, 0x3e, 0x88, 0x43, 0x2c, 0x98, 0xdf, 0x6d, 0xdb, 
		0x19, 0x39, 0x4c, 0xd0, 0x19, 0x5d, 0xd7, 0x26, 0x36, 0xe2, 0x28, 0x6a, 0xf5, 0x22, 0xcf, 0xb0, 
		0xe2, 0xe0, 0xee, 0x90, 0xa4, 0xfe, 0x14, 0xe , 0xdf, 0x71, 0xb5, 0x7f, 0x85, 0x13, 0x4d, 0x5f, 
		0x20, 0xa0, 0xd3, 0x84, 0x6b, 0x5 , 0x89, 0xaf, 0xed, 0xa8, 0x3d, 0xe3, 0xc7, 0xdf, 0xc , 0x72, 
		0x4c, 0xdf, 0x85, 0x75, 0x59, 0x18, 0x4a, 0xba, 0xb3, 0xcc, 0x12, 0xc , 0x8b, 0xcc, 0xd2, 0x21, 
		0xff, 0x9a, 0x85, 0xed, 0xa3, 0x6c, 0xf5, 0x37, 0x5a, 0x73, 0xe5, 0x69, 0x4f, 0xb9, 0xcd, 0x8d, 
		0x92, 0xe0, 0x5e, 0x6d, 0xb5, 0x7f, 0xe1, 0x92, 0x2b, 0x38, 0x7f, 0xfb, 0x9c, 0x4 , 0xe6, 0x7b, 
		0x2d, 0xbd, 0x9 , 0xeb, 0xf3, 0x90, 0x84, 0x6e, 0xc2, 0x92, 0x10, 0xa , 0xaf, 0x2a, 0x3f, 0xdf, 
		0x6a, 0xf6, 0x1f, 0xf6, 0x5c, 0x43, 0xe7, 0xc2, 0x9e, 0xde, 0xd2, 0x5c, 0x86, 0x27, 0xc5, 0xe3, 
		0xcb, 0x83, 0xa1, 0x8c, 0xbc, 0x41, 0xe , 0xdc, 0x29, 0x42, 0xf8, 0x4a, 0xf9, 0x6a, 0x24, 0xdd, 
		0x4a, 0x48, 0x3a, 0x72, 0xdd, 0x7e, 0x4b, 0x53, 0x78, 0x9 , 0x59, 0x44, 0x33, 0xb , 0x54, 0x76, 
		0x8 , 0xab, 0xfd, 0x21, 0x10, 0x9d, 0xab, 0x78, 0xda, 0x27, 0x6e, 0x6b, 0x11, 0x37, 0x93, 0x63
	};

	const unsigned char XORTable2[256] = { 
		0xf8, 0xa1, 0x6a, 0x76, 0xc , 0x4a, 0xfd, 0x4d, 0x10, 0xe0, 0x93, 0xc2, 0x4c, 0x9c, 0x4f, 0xfa,
		0xa0, 0xed, 0xb8, 0xf0, 0x6b, 0xc7, 0xbd, 0x6a, 0xab, 0x3e, 0xf5, 0x2c, 0x65, 0x53, 0x2b, 0x6b,
		0x47, 0xe , 0x19, 0x84, 0x8c, 0xcd, 0x74, 0xee, 0x20, 0xdb, 0x29, 0x6d, 0x4 , 0x44, 0xe7, 0x89,
		0xf5, 0xe8, 0xdd, 0x3f, 0x48, 0xcf, 0xc5, 0xf6, 0x19, 0xbc, 0x21, 0xb5, 0xa4, 0x5 , 0xc4, 0x92,
		0xf3, 0xa1, 0x95, 0x6e, 0xba, 0x83, 0x90, 0xdf, 0x7f, 0x26, 0xd , 0x6e, 0xfd, 0x6a, 0x45, 0x3 ,
		0xcb, 0x9e, 0x12, 0x9d, 0x39, 0xde, 0xf6, 0x46, 0x7b, 0x9f, 0x5f, 0x47, 0x9 , 0x88, 0x29, 0x98,
		0x45, 0x84, 0x65, 0x9a, 0x5e, 0x15, 0x59, 0x8 , 0x75, 0xeb, 0xc7, 0x2b, 0xff, 0xb5, 0x73, 0x4e,
		0x6b, 0x37, 0xdf, 0x72, 0x4 , 0x9c, 0x59, 0x43, 0x18, 0xe , 0x37, 0x4a, 0x5a, 0x85, 0x62, 0x63,
		0x85, 0xdc, 0x11, 0x72, 0x42, 0x2a, 0xd7, 0x52, 0x4c, 0x4f, 0xe0, 0xe , 0xd2, 0xcd, 0x78, 0x54,
		0x1d, 0xda, 0xcc, 0x26, 0x72, 0xb3, 0xf5, 0xd3, 0x3a, 0x32, 0x32, 0x26, 0x60, 0xa3, 0x75, 0xdd,
		0xfb, 0xd4, 0x22, 0x5c, 0x2d, 0x6b, 0x13, 0xa3, 0x4a, 0x7c, 0xdf, 0x7e, 0x3d, 0x5b, 0x5c, 0xfb,
		0x28, 0xaf, 0x62, 0x21, 0x4b, 0xc8, 0xd2, 0xdf, 0x27, 0x33, 0xd7, 0x43, 0xe3, 0x8b, 0x6c, 0xed,
		0xee, 0x91, 0x1f, 0xc2, 0xe6, 0x7f, 0x14, 0xe5, 0xb9, 0x9a, 0x4c, 0xe3, 0xa , 0x7 , 0x27, 0x2d,
		0xd6, 0xdf, 0x28, 0xcc, 0x57, 0x86, 0xf9, 0x50, 0x28, 0x38, 0xaf, 0x9 , 0xab, 0xe4, 0x4e, 0x7a,
		0xa8, 0x3e, 0x90, 0xb , 0x36, 0x10, 0xe2, 0xfe, 0xdf, 0xd0, 0xb0, 0xa4, 0xff, 0x78, 0xe2, 0xd1,
		0x6d, 0x92, 0xa7, 0x8d, 0x5d, 0x92, 0x71, 0xc , 0x85, 0x69, 0x41, 0xe1, 0x7f, 0x57, 0x24, 0x6e
	};

	const unsigned char XORTable3[256] = {
		0xdf, 0xcc, 0x5c, 0x72, 0xf5, 0x4c, 0xf3, 0x91, 0x3d, 0x9e, 0x6a, 0x5e, 0x72, 0x8 , 0x4d, 0x72,
		0x45, 0x15, 0xcf, 0xfe, 0x98, 0x73, 0x3a, 0x76, 0x9c, 0x12, 0x37, 0x10, 0xc , 0x9a, 0x9a, 0x6b,
		0x85, 0x75, 0xda, 0xb , 0xfd, 0xdf, 0x8b, 0x62, 0xf9, 0xc4, 0xd4, 0xe3, 0x10, 0xa4, 0x89, 0x29,
		0x3e, 0x24, 0x4a, 0xbd, 0x3e, 0xdd, 0x6b, 0xf6, 0xd7, 0xcd, 0xd2, 0x4e, 0x95, 0xa3, 0xfb, 0x4e,
		0xd2, 0x85, 0xeb, 0x21, 0x5d, 0xf5, 0x19, 0xc5, 0xc8, 0xa4, 0x90, 0x59, 0x43, 0x28, 0xa3, 0xcd,
		0x11, 0xe5, 0xb8, 0xcb, 0x9c, 0x7c, 0x6d, 0x14, 0xff, 0x20, 0x63, 0x93, 0x57, 0xb5, 0x2c, 0x6a,
		0x5 , 0x78, 0x78, 0xa1, 0xe6, 0xa , 0x5a, 0x71, 0x7e, 0x33, 0x29, 0xba, 0xe , 0xd7, 0x6e, 0x4b,
		0x65, 0xd3, 0x7f, 0x4c, 0x84, 0x4c, 0xe0, 0xdd, 0xdb, 0x8c, 0x60, 0x57, 0x52, 0x44, 0x65, 0x19,
		0xbc, 0x3f, 0x7f, 0x75, 0x2d, 0x74, 0xe1, 0xe0, 0x7a, 0xff, 0xb0, 0x92, 0xf5, 0x6c, 0xf0, 0x38,
		0xcc, 0x41, 0xdf, 0x4 , 0xe7, 0x6b, 0x46, 0x7b, 0x8d, 0xd , 0xf6, 0xab, 0xe , 0x5c, 0xb3, 0x90,
		0x4f, 0x47, 0xe4, 0x1d, 0x54, 0x9 , 0xe2, 0x9f, 0x2b, 0xdf, 0x26, 0xc , 0xfb, 0x86, 0x27, 0xc2,
		0x48, 0x9d, 0xb5, 0xfd, 0x21, 0xaf, 0x26, 0x28, 0x85, 0xa7, 0x4a, 0x18, 0x88, 0xed, 0x45, 0x39,
		0x62, 0x13, 0xc7, 0x22, 0xd6, 0x83, 0xa0, 0xe2, 0xab, 0x37, 0x59, 0x6e, 0x6b, 0x6e, 0x4a, 0xc7,
		0x36, 0x28, 0x3 , 0xe , 0xdf, 0x50, 0x6a, 0xde, 0x43, 0x7f, 0x32, 0x6d, 0xb9, 0x27, 0x26, 0x92,
		0xa1, 0x53, 0xd0, 0x47, 0xa8, 0xee, 0xee, 0x4f, 0x5b, 0x69, 0xe8, 0x42, 0xfa, 0xf8, 0x84, 0x7 ,
		0x1f, 0x5f, 0x2d, 0x2a, 0x2b, 0xe3, 0x9 , 0xd1, 0xaf, 0x4 , 0xdf, 0xed, 0xc2, 0xdc, 0x32, 0x92
	};

std::string xorData(std::string data){
	for(int i = 0; i < data.length(); i++){
		data[i] ^= XORTable1[i % (sizeof(XORTable1)/sizeof(char))];
	}
	return data;
}


int main(){
	std::string data = "Test";
	data = xorData(data);
	std::cout << data << std::endl;
	data = xorData(data);
	std::cout << data;
}
