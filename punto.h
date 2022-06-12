//Declaracion de clases

class Punto {
	//atributos:
	private:
		int x, y;
		
	//metodos:
	public:
		//metodo constructor: inicializa los atributos. Tiene el mismo nombre que la clase
		Punto(int _x, int _y){
			x = _x;
			y = _y;
		}
		Punto(){
			x = y = 0;
		}
		
		void setX(int valorX); //metodo setter: establecer el valor de x;
		void setY(int valorY);
		int getX(); //metodo getter: obtener el valor de x
		int getY();
};
