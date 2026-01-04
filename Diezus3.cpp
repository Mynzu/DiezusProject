#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <map> 
#include <sstream>
#include <algorithm>
using namespace std;

int main(){

    map<string,int> emociones_valores = {
        // Felicidad
        {"alegria", 1000000},
        {"dicha",1000000},
        {"jubilo",1000000},
        {"entusiasmo",1000000},
        {"contento",1000000},
        {"optimismo",1000000},
        {"euforia",1000000},
        {"felicidad",1000000},
        {"gozo",1000000},
        {"regocijo",1000000},

        // Sorpresa
        {"sorpresa",1001010},

        // Impertubalidad
        {"impertubabilidad",1010010},

        // Añoranza
        {"añoranza",1100010},
        {"esperanza",1100010},
        
        
        {"apego",1100110},

        // Afecto
        {"afecto",1101100},
        {"amabilidad",1101100},
        {"benevolencia",1101100},
        {"solidaridad",1101100},
        {"bondad",1101100},
        {"cariño",1101100},
        {"ternura",1101100},
        {"generosidad",1101100},
        {"tolerancia",1101100},
        {"integridad",1101100},

        // compasion
        {"compasion",1011100},
        {"condescendencia",1011100},
        {"consideracion",1011100},
        {"empatia",1011100},
        
        // admiracion
        {"admiracion",1000001},
        {"aprobacion",1000001},
        {"estima",1000001},
        {"honorabilidad",1000001},

        // agradecimiento
        {"agradecimiento",1000011},

        // alivio
        {"alivio",1001001},
        {"tranquilo",1001001},
        {"calma",1001001},
        {"serenidad",1001001},
        {"armonia",1001001},

        // ambivalencia
        {"ambivalencia",1010001},

        // respeto
        {"respeto",1010101},

        // apoyo
        {"apoyo",1011001},

        // confianza
        {"confianza",1011011},
        {"valentia",1011011},
        {"coraje",1011011},
        {"determinacion",1011011},
        {"decision",1011011},
        {"fortaleza",1011011},
        {"fuerza",1011011},
        
        // Resistencia
        {"resistencia",1010111},
        {"perseverancia",1010111},
        {"tenacidad",1010111},
        {"resiliencia",1010111},

        // aca agregue las de la otra noche!

        // Intriga
        {"intriga",1110011},
        {"curiosidad",1110011},

        // amor
        {"amor",1101111},
        {"atraccion",1101111},

        // autonomia
        {"autonomia",1111011},
        {"independencia",1111011},
                
    };

    std::vector<string> emociones_tristes = {
        {"tristeza",1000010},
        {"afliccion",1000010},
        {"desanimo",1000010},
        {"desmotivacion",1000010},
        {"desasosiego",1000010},

        {"dependencia", 1111100},

        // Ira
        {"ira",1001010},
        {"enojo",1001010},
        {"furia",1001010},
        {"rabia",1001010},
        {"rebeldia",1001010},
        {"indignacion",1001010},

        // Resentimiento
        {"resentimiento",1001110},
        {"repudio",1001110},
        {"rencor",1001110},

        //injusticia
        {"injusticia",1010010},

        // insatisfaccion
        {"insatisfaccion",1010110},

        //terquedad
        {"terquedad",1001011},
        {"obstinacion",1001011},
        {"rigidez",1001011},
        {"inflexibilidad",1001011},
        {"ignorancia",1001011}, // agregue esta

        // celos
        {"celos",1110010},
        {"envidia",1110010},
        {"recelos",1110010},
        {"sospecha",1110010},

        // inseguridad
        {"inseguridad",1011010},

        // impaciencia
        {"impaciencia",1010000},

        //Inconformidad
        {"insuficiencia",1011000},
        {"inconformidad",1011000},
        {"comparacion",1011000},

        // Confusion
        {"confusion",1000110},
        {"duda",1000110},
        {"incertidumbre",1000110},
        {"desconcierto",1000110},
        {"desorientacion",1000110},
        {"turbacion",1000110},
        {"inquietud",1000110}, // agregue esta

        // incapacidad
        {"incapacidad",1100000},
        {"ineptitud",1100000},
        {"incompetencia",1100000},
        {"ineficacia",1100000},
        {"ineficiencia",1100000},
        {"inutilidad",1100000},
        {"torpeza",1100000},

        // peraza
        {"pereza",1100101},
        {"flojera",1100101},
        {"procastinacion",1100101},

        // fracaso
        {"frustracion",1110000},
        {"fracaso",1110000},
        {"irritacion",1110000},

        // Arrepentimiento
        {"arrepentimiento",1100100},
        {"culpa",1100100},
        {"remordimiento",1100100},

        // Amargura
        {"amargura",1101010},
        {"arrogancia",1101010},
        {"desconfianza",1101010},
        {"resentimiento",1101010},
        {"decepcion",1101010},
        {"desconsideracion",1101010},
        {"desconsuelo",1101010},

        // espanto
        {"espanto",1101000},
        {"miedo",1101000},
        {"terror",1101000},
        {"panico",1101000},
        {"fobia",1101000},

        // aburrimiento
        {"aburrimiento",1000101},
        {"fastidio",1000101},
        {"tedio",1000101},
        {"hastio",1000101},

        // agravio
        {"agravio",1001101},
        {"abuso",1001101},
        {"agresion",1001101},
        {"alteracion",1001101},
        {"destruccion",1001101},

        // abrumado
        {"abrumado",1000111},
        {"agobio",1000111},
        {"angustia",1000111},
        {"ansiedad",1000111},
        {"estres",1000111},
        {"presion",1000111},
        {"sobrecarga",1000111},
        {"tension",1000111},
        {"fatiga",1000111},
        {"agotamiento",1000111},
        {"estres academico", 1000111},

        // abandono
        {"abandono",1001111},
        {"ausencia",1001111},
        {"desamparo",1001111},
        {"desolacion",1001111},
        {"soledad",1001111}, //listo

        // apatia
        {"apatia",1010011},
        {"asco",1010011},
        {"desapego",1010011},
        {"desamor",1010011},
        {"desprecio",1010011},
        {"desden",1010011},
        {"desinteres",1010011},
        {"disgusto",1010011},
        {"egoismo",1010011},
        {"indiferencia",1010011},

        // traicion
        {"traicion",1100001},
        {"engaño",1100001},
        {"infidelidad",1100001},
        {"mentira",1100001},
        {"rechazo",1100001},
        {"perfidia",1100001},

        // Prepotencia
        {"prepotencia",1011111},

        {"vurnerabilidad",1111101},
        {"debilidad",1111101},

        // Cansancio
        {"cansancio",1000100},
        {"abatimiento",1000100},
        {"fatiga",1000100},

        // desencanto
        {"desescanto",1100111},
        {"desilusion",1100111},

        {"impotencia",1111001},
        {"humillacion",1111001},

        // discordia
        {"discordia",1110001},
        {"desacuerdo",1110001},

        // nostalgia
        {"nostalgia",1101011},
        {"melancolia",1101011},

        //  depresion
        {"depresion",1101101},
        {"vacio",1101101},

        // dolor
        {"dolor",1101001},
        {"duelo",1101001},
        {"derrota",1101001}, //listo
        {"desaliento",1101001}, // agregue esta

        {"pesimismo",1100011},
        {"negatividad",1100011},
        {"desesperanza",1100011},

        {"perfeccionismo",1111111}, //listo
        {"obsesion",1111111},
        {"autoexigencia",1111111},
    };


    std::vector<string> emociones_negativas = {
        {"no",0000000},
        {"nunca",0000000},
        {"ningun",0000000},
        {"ninguna",0000000},
        {"jamas",0000000},
        {"nunca",0000000},
        {"tampoco",0000000},
        {"nada",0000000},
        {"tampoco",0000000},
        {"nadie",0000000},
        {"sin",0000000},
        {"ni",0000000},
        {"pero",0000000},
        {"aunque",0000000},
        {"excepto",0000000},
        {"ni siquiera",0000000},
    };
}    

