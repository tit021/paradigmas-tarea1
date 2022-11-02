#include <iostream>
using namespace std;

class Animal {
public:
  string raza,peso,altura,nombre;
  void agregar_ani();
  void mostrar_ani();
};

void Animal::agregar_ani() {
  cout << "Escriba el Nombre del animal: ";
  getline(cin, nombre);
  cout << "Escriba su raza: ";
  getline(cin, raza);
  cout << "Escriba su pes apróx.: ";
  getline(cin, peso);
  cout << "Escriba su altura apróx.: ";
  getline(cin, altura);
}
void Animal::mostrar_ani() {
  cout << "El Nombre del animal es: " << nombre << endl;
  cout << "Su raza es: " << raza << endl;
  cout << "Su peso es: " << peso << endl;
  cout << "Su altura es: " << altura << endl;
}

class Perros : public Animal {
public:
  string color,habitat,comida;
  void agregar_perros();
  void mostrar_perros();
}
void Perros::agregar_perros() {
  agregar_ani();
  cout << "Escriba el Habitat del perro (doméstico ó salvaje): ";
  getline(cin, habitat);
  cout << "Describa su comida: ";
  getline(cin, comida);
  cout << "Describa el color de su pelaje: ";
  getline(cin, color);
}
void Perros::mostrar_perros() {
  mostrar_ani();
  cout << "El Hábitat del perro es: " << habitat << endl;
  cout << "Su comida principal es: " << comida << endl;
  cout << "El color de su pelaje es: " << color << endl;
}

class Gatos : public Animal {
public:
  string color,habitat,comida,color_ojos;
  void agregar_gatos();
  void mostrar_gatos();
}
void Gatos::agregar_gatos() {
  agregar_ani();
  cout << "Escriba el Habitat del gato (doméstico ó salvaje): ";
  getline(cin, habitat);
  cout << "Describa su comida: ";
  getline(cin, comida);
  cout << "Describa el color de su pelaje: ";
  getline(cin, color);
  cout << "Describa el color de sus ojos: ";
  getline(cin, color_ojos);
}
void Gatos::mostrar_gatos() {
  mostrar_ani();
  cout << "El Hábitat del perro es: " << habitat << endl;
  cout << "Su comida principal es: " << comida << endl;
  cout << "El color de su pelaje es: " << color << endl;
  cout << "El color de sus ojos: " << color_ojos << endl;
}

class Caballos : public Animal {
public:
  string color,habitat,comida,biotipo;
  void agregar_caballos();
  void mostrar_caballos();
}
void Caballos::agregar_caballos() {
  agregar_ani();
  cout << "Escriba el Habitat del Caballo (doméstico ó salvaje): ";
  getline(cin, habitat);
  cout << "Describa su comida: ";
  getline(cin, comida);
  cout << "Describa el color de su pelaje: ";
  getline(cin, color);
  cout << "Biotipo de caballo (corralero/exposisión/pura sangre/de trote): ";
  getline(cin, biotipo);
}
void Caballos::mostrar_caballos() {
  mostrar_ani();
  cout << "El Hábitat del caballo es: " << habitat << endl;
  cout << "Su comida principal es: " << comida << endl;
  cout << "El color de su pelaje es: " << color << endl;
  cout << "El Biotipo de caballo es: " << biotipo << endl;
}

  class Peces : public Animal {
public:
  string color,habitat,comida,aletas,familia;
  void agregar_peces();
  void mostrar_peces();
}
void Gatos::agregar_gatos() {
  agregar_ani();
  cout << "Escriba familia de peces(mamífero o no): ";
  getline(cin, familia);
  cout << "Escriba el Habitat del pez: ";
  getline(cin, habitat);
  cout << "Describa su comida: ";
  getline(cin, comida);
  cout << "Describa el o los colores de su piel: ";
  getline(cin, color);
  cout << "Cantidad de aletas: ";
  getline(cin, cantidad);
}
void Gatos::mostrar_peces() {
  mostrar_ani();
  cout << "La familia del pez es: " << habitat << endl;
  cout << "El Hábitat del pez es: " << habitat << endl;
  cout << "Su comida principal es: " << comida << endl;
  cout << "El color de su piel es: " << color << endl;
  cout << "La cantidad de aletas es: " << color_ojos << endl;
}


int main() {
  Perro e;
  Gatos g;
  Caballos c;
  e.agregar_perro();
  g.agregar_gatos();
  c.agregar_caballos();
  p.agregar_peces();
  cout << "\n" << endl;
  e.mostrar_perro();
  g.mostrar_gatos();
  c.mostrar_caballos();
  p.mostrar_peces();
}
  
