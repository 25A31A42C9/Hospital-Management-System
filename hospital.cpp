#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Patient {
    int id;
    string name;
    int age;
};

struct Doctor {
    int id;
    string name;
    string specialization;
};

struct Appointment {
    int patientId;
    int doctorId;
    string date;
};

vector<Patient> patients;
vector<Doctor> doctors;
vector<Appointment> appointments;

// Add Patient
void addPatient() {
    Patient p;
    cout << "Enter Patient ID: ";
    cin >> p.id;
    cout << "Enter Name: ";
    cin >> p.name;
    cout << "Enter Age: ";
    cin >> p.age;

    patients.push_back(p);
    cout << "Patient added successfully!\n";
}

// View Patients
void viewPatients() {
    cout << "\n--- Patients List ---\n";
    for (auto &p : patients) {
        cout << "ID: " << p.id << " Name: " << p.name
             << " Age: " << p.age << endl;
    }
}

// Add Doctor
void addDoctor() {
    Doctor d;
    cout << "Enter Doctor ID: ";
    cin >> d.id;
    cout << "Enter Name: ";
    cin >> d.name;
    cout << "Enter Specialization: ";
    cin >> d.specialization;

    doctors.push_back(d);
    cout << "Doctor added successfully!\n";
}

// View Doctors
void viewDoctors() {
    cout << "\n--- Doctors List ---\n";
    for (auto &d : doctors) {
        cout << "ID: " << d.id << " Name: " << d.name
             << " Specialization: " << d.specialization << endl;
    }
}

// Book Appointment
void bookAppointment() {
    Appointment a;
    cout << "Enter Patient ID: ";
    cin >> a.patientId;
    cout << "Enter Doctor ID: ";
    cin >> a.doctorId;
    cout << "Enter Date: ";
    cin >> a.date;

    appointments.push_back(a);
    cout << "Appointment booked!\n";
}

// View Appointments
void viewAppointments() {
    cout << "\n--- Appointments ---\n";
    for (auto &a : appointments) {
        cout << "Patient ID: " << a.patientId
             << " Doctor ID: " << a.doctorId
             << " Date: " << a.date << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\n==== Hospital Management System ====\n";
        cout << "1. Add Patient\n";
        cout << "2. View Patients\n";
        cout << "3. Add Doctor\n";
        cout << "4. View Doctors\n";
        cout << "5. Book Appointment\n";
        cout << "6. View Appointments\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addPatient(); break;
            case 2: viewPatients(); break;
            case 3: addDoctor(); break;
            case 4: viewDoctors(); break;
            case 5: bookAppointment(); break;
            case 6: viewAppointments(); break;
            case 7: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 7);

    return 0;
}