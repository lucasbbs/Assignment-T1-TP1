#include <iostream>
#include <ctime>
#include <vector>
// #include "entidades/Codigo.h"
#include "entidades/dominios.h"
// #include "module_user/User.h"
// #include "module_rating/Rating.h"
// #include "module_session/Session.h"
// #include "module_excursion/Excursion.h"

using namespace std;

vector<string> Cidade::cidades;
vector<Codigo *> Codigo::codigos;
void display_cities()
{
     vector<string> cities = Cidade::getCidades();
     cout << cities.size() << endl;
     for (size_t i = 0; i < cities.size(); i++)
     {
          cout << cities[i] << endl;
     }
}

int main()
{
     Nome newName{"Lucas Breno Braga De Souza"};
     Titulo newTitle1{"Eis aqui um titulo"};
     Titulo newTitle2{"Eis aqui um titulo invalido"};
     Senha newPassword1{"124ASs"};
     Senha newPassword3{"Qw3rT1"};
     Senha newPassword2{"1azsAS"};
     // Email newEmail{"012345678901234567890123456789012345678901234567890123456789012@test.com"};
     // Email newEmail2{"01234567890123456789012345678901234567890123456789012345678901212@test.com"};
     // Email newEmail3{"lucas@testcom"};
     // Email newEmail4{"12.1987.@test.com"};
     // Data newDate8{"15/Ago/2022"};
     // Data newDate9{"28/Set/2022"};
     // Data newDate6{"12/Jun/2022"};
     // Data newDate7{"15/Jul/2022"};
     // Data newDate2{"29/Fev/2020"};
     // Data newDate3{"12/Mar/2022"};
     // Data newDate4{"12/Abr/2022"};
     // Data newDate5{"12/Mai/2022"};
     // Data newDate1{"12/Jan/2022"};
     // Data newDate10{"15/Out/2022"};
     // Data newDate11{"28/Nov/2022"};
     // Data newDate12{"28/Dez/2022"};

     // Cidade hongKong{"Hong Kong"}, bangkok{"Bangkok"}, macau{"Macau"}, singapura{"Singapura"}, londres{"Londres"}, paris{"Paris"}, dubai{"Dubai"}, delhi{"Delhi"}, istambul{"Istambul"}, kuala{"Kuala"}, lumpur{"Lumpur"}, novaIorque{"Nova Iorque"}, antalya{"Antalya"}, mumbai{"Mumbai"}, shenzen{"Shenzen"}, phuket{"Phuket"};
     // display_cities();

     // User lucas{"Lucas", "lucasbbs@live.fr", "123456"};

     // cout << lucas.get_name() << endl;

     // Excursion lucasExcursion{"title", "note", "city", "duration", "description", "address"};
     // cout << lucasExcursion.get_title() << endl
     //      << lucasExcursion.get_note() << endl
     //      << lucasExcursion.get_city() << endl
     //      << lucasExcursion.get_duration() << endl
     //      << lucasExcursion.get_description() << endl
     //      << lucasExcursion.get_address() << endl;

     // Session lucasSession{""};
     // cout << lucasSession.get_date() << endl
     //      << lucasSession.get_time() << endl;
     // lucasSession.get_languages_names();

     // Rating lucasRating{};
     // cout << lucasRating.get_rating() << endl;
     return 0;
}