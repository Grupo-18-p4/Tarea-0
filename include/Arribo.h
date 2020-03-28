class Arribo 
 {    
     private:  
     DtFecha id;    
     float carga;
 
 public:
 DtFecha GetArriboFecha(Arribo arrival);
  string GetArriboCarga(Arribo arrival);
 Arribo::~Arribo();
 Arribo::Arribo();
 Arribo :: Arribo(DtFecha fecha,float carga);
 } 
