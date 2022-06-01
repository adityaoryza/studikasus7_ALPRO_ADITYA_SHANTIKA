#include <iostream>
using namespace std;
// PENDEKLARASIAN CLASS
class DATA_STOKBRG {
    // FUNGSI YANG DIGUNAKAN
  public :
    void input_menu();
    void proses_sorting();
    void output_sorting();
    void proses_search_id_stok();
    // DEKLARASI VARIABLE
  private :
    int BYK_STOK,  ID_BRG[50], JML_BRG[50], t, ID_TUJUAN, v;
    string NAMA_BRG[50], u;

};
// FUNGSI INPUT MENU
void DATA_STOKBRG::input_menu()
{
  cout<<"========== PROGRAM SORTING STOK BARANG ==========" << endl;
  cout<<"MASUKAN BANYAK STOK BARANG ANDA : "; 
  cin>> BYK_STOK;
  for(int i=0; i<BYK_STOK; i++)
    {
      cout<<"===> STOK BARANG KE "<<i+1<<endl;
      cout<<"KETIKKAN ID STOK BARANG \t: "; 
      cin>> ID_BRG[i];
      cout<<"KETIKKAN NAMA STOK BARANG \t: "; 
      cin>>NAMA_BRG[i];
      cout<<"JUMLAH STOK BARANG \t\t: "; 
      cin>> JML_BRG[i];
      cout << endl;
  cout<<"===================================================================="<< endl;
    }
}
// FUNGSI PROSES SORTING
void DATA_STOKBRG::proses_sorting()
{
  for(int i=1; i<BYK_STOK; i++)
    {
      for(int j=BYK_STOK-1; j>=1; j--)
        {
          if(JML_BRG[j]>JML_BRG[j-1])
          {
            t=JML_BRG[j];
            JML_BRG[j]=JML_BRG[j-1];
            JML_BRG[j-1]=t;
            u=NAMA_BRG[j];
            NAMA_BRG[j]=NAMA_BRG[j-1];
            NAMA_BRG[j-1]=u;
            v= ID_BRG[j];
             ID_BRG[j]= ID_BRG[j-1];
             ID_BRG[j-1]=v;
          }
        }
    }
}
// FUNGSI OUTPUT SORTING
void DATA_STOKBRG::output_sorting()
{
  system("cls");
  cout<<"\n===================================================================="<< endl;
  cout<<"================== HASIL SORTING STOK BARANG ANDA =================="<<endl;
  cout<<"stok barang anda disorting secara otomatis dengan metode Descending!"<<endl;
  cout<<"===================================================================="<< endl;
  cout <<"\tJUMLAH BARANG\tNAMA BARANG\tID BARANG " << endl;
  cout<<"===================================================================="<< endl;

  for(int i=0; i<BYK_STOK; i++)
    {
      cout<< "\t"<<JML_BRG[i]<<"\t\t"<<NAMA_BRG[i]<<"\t\t"<< ID_BRG[i]<<endl;
  cout<<"===================================================================="<< endl;
    }
}
// FUNGSI CARI BARANG
void DATA_STOKBRG::proses_search_id_stok()
{
  cout<<"MASUKAN ID BARANG YANG AKAN DICARI : "; 
  cin>>ID_TUJUAN;
  for(int i=0; i<BYK_STOK; i++)
    {
      if(ID_TUJUAN== ID_BRG[i])
      {
        cout<<"===================================================================="<< endl;
        cout <<"BERIKUT STOK BARANG YANG ANDA CARI : " << endl;
        cout <<"===>";
        cout << " Barang dengan ID "<< ID_BRG[i]<<" NAMA BARANG "<< NAMA_BRG[i]<<" dan STOK berjumlah "<< JML_BRG[i];
        cout<<"\n===================================================================="<< endl;
      }
    }
}
// FUNGSI MAIN
int main() 
{
  system("cls");
//   DEKLARASI OBJECT DAN PEMANGGILAN FUNGSI
  DATA_STOKBRG hasil_akhir;
  hasil_akhir.input_menu();
  hasil_akhir.proses_sorting();
  hasil_akhir.output_sorting();
  hasil_akhir.proses_search_id_stok();
}
