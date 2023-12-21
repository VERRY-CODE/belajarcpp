#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double nilai_hadir,rata;
  int nilai_quis,nilai_tugas,nilai_uts,nilai_uas;

  cout << fixed;
  cout << "NILAI HADIR : ";
  cin >> nilai_hadir;
  cout << "NILAI TUGAS : ";
  cin >> nilai_tugas;
  cout << "NILAI QUIS : ";
  cin >> nilai_quis;
  cout << "NILAI UTS : ";
  cin >> nilai_uts;
  cout << "NILAI UAS : ";
  cin >> nilai_uas;


  rata =(nilai_hadir+nilai_tugas+nilai_quis+nilai_uts+nilai_uas)/5;

  cout << "Rata : " << rata << endl;

  if (rata>=55)
  cout << "Ket : LULUS";
  else 
  cout << "Ket : GAGAL" << endl;

  if (rata>=80)
  cout << "Ket : A";
  else 
  if (rata>=70)
  cout << "Ket : B";
  else 
  if (rata>=50)
  cout << "Ket : C";
  else 
  if (rata>=30)
  cout << "Rat : D";
  else 
  if (rata>=0)
  cout << "Ket E";

  return 0;
}