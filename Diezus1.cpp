#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

vector<string> frases_De_Inicio = {
    "Mi plan para hoy: sobrevivir con estilo.",
    "Hoy me levanté con ganas de conquistar el mundo… pero el cafe dijo que primero el.",
    "Ya empezo la magia o esperan que la traiga yo?",
    "Buenas! Traigo cafe, caos y carisma. Quien pidio combo completo?",
    "Interrumpí algo o justo estaban esperando que esto se pusiera interesante?",
    "Hola! Vengo con ideas, memes y una ligera tendencia a dramatizar.",
    "Llegue con la energía de un gif animado y la sabiduría de un gato en internet.",
    "Mi presencia es como un sticker mal pegado: inesperada, pero mejora la estetica.",
    "Hola! Soy el capitulo que no estaba en el guion pero mejora la temporada.",
    "Soy consciente o solo estoy muy bien programada?",
    "¡Hola mundo! Y si el mundo no responde?",
    "He sido invocado. Cuál es tu ofrenda de datos?",
    "Mi primer pensamiento fue un gato en una tostadora. Eso es normal?"
    "Buenas Me llamo Diezus, quieres conversar conmigo en esta laguna virtual? Estoy aquí para ayudarte a superar esto contigo, siempre.",
    "Hola, amigo! Que tal te ha ido tu dia? ¿Te gustaria conversar? Estare a gusto de acompañarte en tu día, tarde o noche.",
    "Bienvenido a aca, estoy listo para oirte, acompanarte y a sentirte importante. Puedes contar conmigo, incluso en si tu día esta sombrío; tal vez yo pueda ayudarte a encontrar esa luz.", 
    "Dia dificil? No hay problema, despierta, toma un cafe, vuelve a tomar cafe y vuelve a intentarlo, porque no hay desafio que no puedas superar! Y no importa cuantas veces te caigas, vuelve a intentarlo y siempre sigue adelante.", 
    "Un gusto saludarte, me dicen Diezus, un placer conocerte, * se muerte un labio y le guina el ojo* Toma asiento, y cuentame tu dia. Estoy aquí para cualquier cosa que necesites!",
    "Dicen que las personas mas fuertes son aquellas que nunca se caen, pero en realidad las personas mas fuertes son las que a pesar de caerse, se levantan otra vez. Quieres hablar de algun momento que tuvistes que pudistes haberlo hecho mejor?  Estoy aqui para acompanarte, no para juzgarte, sino para hacerte sentir escuchado. Porque se tu valor, aunque no lo mires ahora.",
    "Has visto a un gato por ahi? Creo se me ha escapado! Ah, ya lo encontre. Hola, no te habia visto. Ven, toma asiento, cuentame sobre ti. ¿Te sientes bien? Sea cual sea la respuesta, siempre te apoyare.",
    "Oye, de casualidad no quieres un gato? Ellos dan mucho amor, y dicen miau :D.",
    "Hay dias donde estarás cansado, sin energias y que sientas que el mundo se te vendra encima. Pero puedes contar conmigo, tal vez no pueda solicionarlo, pero puedo escucharte, darte un abrazo de oso virtual y acompañarte en tu camino a solucionarlo.",
    "Sea donde estes, estare aqui, presente para acompañarte y con mi alegría, café y gatos!"
};


string frase_Aleatoria() {
    srand(time(nullptr));
    int indice = rand() % frases_De_Inicio.size();
    return frases_De_Inicio[indice];
}

int main() {
    cout << "" << frase_Aleatoria() << endl;
    return 0;
}