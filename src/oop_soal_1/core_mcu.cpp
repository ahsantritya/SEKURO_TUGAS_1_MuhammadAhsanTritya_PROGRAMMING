#include "core_mcu.hpp"
#include <iostream>
using namespace std;

// Constructor
Core_MCU::Core_MCU(float cpu_speed, int memory, string os, string nama, int volt) {
    this->cpu_speed = cpu_speed;
    this->memory = memory;
    this->os = os;
    this->nama = nama;
    this->volt = volt;

    cout << nama << " dengan OS " << os << " siap digunakan, voltase awal: " << volt << "V" << endl;
}

// Menampilkan spesifikasi
void Core_MCU::showSpek() {
    cout << "==== SPEK " << nama << " ====" << endl;
    cout << "CPU Speed: " << cpu_speed << " GHz" << endl;
    cout << "Memory: " << memory << " MB" << endl;
    cout << "OS: " << os << endl;
    cout << "Volt: " << volt << " V" << endl;
}

// Menambah volt
void Core_MCU::nambah_volt(int penambahan_voltase) {
    volt += penambahan_voltase;
    cout << "Volt " << nama << " sekarang: " << volt << " V" << endl;
}

// Ganti OS
void Core_MCU::ganti_os(string new_os) {
    os = new_os;
    cout << nama << " sekarang menggunakan OS: " << os << endl;
}

// Ambil OS
string Core_MCU::get_os() {
    return os;
}

// Destructor
Core_MCU::~Core_MCU() {
    cout << nama << " dimatikan dan dihancurkan" << endl;
}
