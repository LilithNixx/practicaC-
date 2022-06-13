//Declaracion de clases

class Punto {
	//atributos:
	private:
		int x, y;
		static int contador; //declaracion de atributo estatico: tiene un unico valor para todos los objetos de la clase.
		//se inicializa en otro archivo a parte: int nombredeclase::contador = 0;
	
	//metodos:
	public:
		//metodo constructor: inicializa los atributos. Tiene el mismo nombre que la clase
		Punto(int x, int y){
			this->x = x;
			this->y = y;
			//con this-> indicamos que esa variable es un miembro de la clase y lo puedo diferenciar de los parametros.
		}
		Punto(){
			x = y = 0;
		}
		
		void setX(int valorX); //metodo setter: establecer el valor de x;
		void setY(int valorY);
		int getX(); //metodo getter: obtener el valor de x
		int getY();
};


/*Visibilidad:
	publico: los metodos pueden ser accedidos por todos.
	privado: los metodos pueden ser accedidos solo por miembros de la misma clase.
	protected: los metodos puede ser accedidos por la misma clase o por clases hijas heredadas.

Constructor por defecto:
	se evita ponerlo o se pone vacío:
	Alumno() {

	}
	inicializa en cero.
	
Arreglo de objetos:
	Es necesario tener el constructor por defecto.
	Alumno alumnos[4]; --> crear un arreglo de objetos estatico
	Alumno* alumnos2 = mew Alumno[3];  --> crear un arreglo de objetos dinamico
	
	//recorrer el arreglo:
	for(int i = 0; i < 3; i++){
		alumnos[i].mostrarNotas(); --> forma estatica
		(alumnos2+i)->pedirNotas();  --> forma dinamica
    }

Destructor de objetos:
	~Perro(){
	
	}
	
	sirve para liberar memoria y conviene crear uno x cada clase creada.
	sirve tambien para destruir un objeto:
	perro.~Perro();  --> estatico
	delete perro; -->dinamico

Clase compuesta:

clases en donde se usan objetos que derivan de otras clases:
CLASE 1:
class Expediente {
	private:
		int nroExp;
	public:
		Expediente(int nroExp){
			this->nroExp = nrpExp;	
	}
	Expediente(){
	
	}
	~Expediente(){
	
};
CLASE 2:
class Direccion {
	private: 
		string direccion;
	public:
		Direccion(string direccion){
			this->direccion = direccion
		}
		Direccion(){
		
		}
		~Direccion(){
		
		}
		string getDireccion(){
			return direccion;
		}
};
CLASE 3:
class Estudiante{
	private:
		string codigo;
		float promedio;
		Expediente exp;
		Direccion dir;
	public:
	constructor:
		Estudiante(string codigo, float promedio, int nroExp, string direccion) : exp(nroExp), dir(direccion){
			this->codigo = codigo;
			this->promedio = promedio;
		}
		
		void mostrarDatos(){
			cout<<"codigo: "<<codigo<<endl;
			cout<<"Promedio: "<<promedio<<endl;
			cout<<"Numero de expediente: "<<exp.getNroExpediente();
			cout<<"Direccion: "<<expgetDireccion()<<endl;
	}
		
Funciones amigas (friend):
	tienen permitido acceder a los atributos que están en privado.
	La clase les da los permisos para poder acceder.
	Se pone dentro de la clase:
				friend tipo nombre (tipos de los paramentros);
				friend void modificar(Perosnaje&, int, int);



*/
