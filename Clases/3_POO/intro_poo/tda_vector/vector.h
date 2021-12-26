typedef int Dato;

class Vector { 
	private:
	// atributos
	int longitud;
	Dato* datos;

	public:
	// métodos (interfaz)
	// Constructor sin parametros
	// PRE: - 
	// POS: construye un vector vacio
	Vector( );

    void inicializar_datos(Dato* datos);
    //Carga el vector original

   
    void copiar_datos(Dato* aux, int tam);
    //Copia los datos al vector aux

	// Constructor con parametros
	// PRE: tam > 0
	// POS: construye un vector de longitud tam y datos vacios
	Vector ( int tam );
	// Constructor de copia
	Vector ( const Vector & vec );
	// mostrar
	// PRE: -
	// POS: recorre el vector y lo imprime por pantalla
	void mostrar( );
	// insertar
	// PRE:  0 <= pos < longitud, d tiene que ser un Dato valido
	// POS: inserta el dato d, en la posicion "pos", la 1ra es la 0 
	void insertar (Dato d, int pos);
	// obtener
	// PRE:  0 <= pos < longitud, y que el dato exista
	// POS: devuelve el dato que está en pos
	Dato obtener (int pos);
	// redimensionar
	// PRE: tam > 0
	// POS: redimensiona el vector, si tam es mayor que la longitud inicial, deja los datos anteriores y completa con vacios, si es menor, corta los datos que exceden
	void redimensionar ( int tam );

	// Destructor
	// PRE: -
	// POS: libera recursos utilizados
	~Vector ( );

	// operador +
	void operator= ( const Vector & vec );

};