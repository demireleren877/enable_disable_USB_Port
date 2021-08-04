#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void disableUSB(){
	system("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Services\\USBSTOR /v Start /t REG_DWORD /d 4 /f");
}
void enableUSB(){
	system("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Services\\USBSTOR /v Start /t REG_DWORD /d 3 /f");
}
int main() {
	int tercih;
	cout << "Usb portunu enable etmek icin 1'e , disable etmek icin 2'ye basiniz\n";
	cin >> tercih;
	if(tercih==1){
		enableUSB();
	}
	else if(tercih==2){
		disableUSB();
	}
	system("pause");
}
