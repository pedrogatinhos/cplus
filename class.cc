#include <iostream>
#include <string>

class Speaker{
    private:
    public:
    int idade;
    std::string nome;

    void speak(){
        std::cout <<"hello woooorld\n";
    }
    void setIdade(int idade){
        this->idade = idade;
    }
    void getIdade(){
        std::cout << this->idade;
    }
};

class SpeakerConstruct{
    private:
    public:
        std::string nome;
        int idade;
        SpeakerConstruct(std::string nome, int idade){
            this->nome = nome;
            this-> idade = idade;
        }
        void getData(){
            std::cout << this->idade << this->nome;
        }
};
int main(){
   Speaker lucas;
   lucas.speak();
   lucas.setIdade(9);
   lucas.getIdade();

   SpeakerConstruct joao("joao", 19);
   joao.getData();

    
    return 0;
};