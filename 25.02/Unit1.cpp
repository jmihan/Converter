//---------------------------------------------------------------------------

#include <vcl.h>
#include <string.h>
#include <iostream.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#pragma hdrstop
AnsiString cb2,cb3;
#include "Unit1.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
		ComboBox1->Items->Add("Длина");
		ComboBox1->Items->Add("Объем");
		ComboBox1->Items->Add("Давление");
		ComboBox1->Items->Add("Скорость");
		ComboBox1->Items->Add("Валюта");
		ComboBox1->Items->Add("Площадь");
		ComboBox1->Items->Add("Вес");
		ComboBox1->Items->Add("Время");
		ComboBox1->Items->Add("Температура");
		ComboBox1->Items->Add("Объем информации");
		ComboBox1->Items->Add("Мощность");
		ComboBox1->Items->Add("Передача данных");
		ComboBox1->Items->Add("Плотность");
		ComboBox1->Items->Add("Энергия");
		ComboBox1->Items->Add("Сила");
		ComboBox1->Items->Add("Угловая мера");
		ComboBox1->Items->Add("Угловая скорость");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ComboBox1Select(TObject *Sender)
{
        AnsiString s;
        s=ComboBox1->Text;
		ComboBox2->Clear();
        ComboBox3->Clear();
		Edit1->Text=0;
        Edit2->Text=0;
        //ShowMessage();
		if(s=="Длина")
		{
				ComboBox2->Items->Add("МЕТРИЧЕСКАЯ СИСТЕМА: ");
				ComboBox2->Items->Add("Километр (км)");
				ComboBox2->Items->Add("Метр (м)");
				ComboBox2->Items->Add("Дециметр (дм)");
				ComboBox2->Items->Add("Сантиметр (см)");
				ComboBox2->Items->Add("Миллиметр (мм)");
				ComboBox2->Items->Add("Микрометр (мкм)");
				ComboBox2->Items->Add("Нанометр (нм)");
				ComboBox2->Items->Add("Ангстрем (А)");
				ComboBox2->Items->Add("США И БРИТАНИЯ: ");
				ComboBox2->Items->Add("Лиг/льё");
				ComboBox2->Items->Add("Миля (mi)");
				ComboBox2->Items->Add("Фарлонг");
				ComboBox2->Items->Add("Чейн");
				ComboBox2->Items->Add("Род");
				ComboBox2->Items->Add("Перч");
				ComboBox2->Items->Add("Эль");
				ComboBox2->Items->Add("Ярд (yd)");
				ComboBox2->Items->Add("Кубит");
				ComboBox2->Items->Add("Фут (ft)");
				ComboBox2->Items->Add("Спан");
				ComboBox2->Items->Add("Линк");
				ComboBox2->Items->Add("хенд/рука");
				ComboBox2->Items->Add("Палм/ладонь");
				ComboBox2->Items->Add("Нейл/ноготь");
				ComboBox2->Items->Add("Дюйм (in)");
				ComboBox2->Items->Add("Фингер/палец");
				ComboBox2->Items->Add("Диджит");
				ComboBox2->Items->Add("Барлейкорн");
				ComboBox2->Items->Add("Линия");
				ComboBox2->Items->Add("Мил");
				ComboBox2->Items->Add("Микродюйм");
				ComboBox2->Items->Add("СТАРОРУССКАЯ СИСТЕМА: ");
				ComboBox2->Items->Add("Миля");
				ComboBox2->Items->Add("Верста");
				ComboBox2->Items->Add("Межевая верста");
				ComboBox2->Items->Add("Косая сажень");
				ComboBox2->Items->Add("Сажень");
				ComboBox2->Items->Add("Маховая сажень");
				ComboBox2->Items->Add("Аршин");
				ComboBox2->Items->Add("Локоть");
				ComboBox2->Items->Add("Фут");
				ComboBox2->Items->Add("Линия");
				ComboBox2->Items->Add("Дюйм");
				ComboBox2->Items->Add("Вершок");
				ComboBox2->Items->Add("Пядь");
				ComboBox2->Items->Add("МОРСКИЕ ЕДИНИЦЫ: ");
				ComboBox2->Items->Add("Морская лига/лье");
				ComboBox2->Items->Add("Морская миля");
				ComboBox2->Items->Add("Кабельтов");
				ComboBox2->Items->Add("Фатом/морская сажень");
				ComboBox2->Items->Add("АСТРОНОМИЧЕСКИЕ ЕДИНИЦЫ: ");
				ComboBox2->Items->Add("Красное смещение");
				ComboBox2->Items->Add("Парсек");
				ComboBox2->Items->Add("Световой год");
				ComboBox2->Items->Add("Астрономическая единица");
				ComboBox2->Items->Add("Световая минута");
				ComboBox2->Items->Add("Световая секунда");
				ComboBox2->Items->Add("ТИПОГРАФСКИЕ ЕДИНИЦЫ: ");
				ComboBox2->Items->Add("Пика");
				ComboBox2->Items->Add("Пункт (pt)");
				ComboBox2->Items->Add("Пиксель (px)");
				ComboBox2->Items->Add("Твип");
				ComboBox2->Items->Add("Цицеро");
				ComboBox2->Items->Add("Пункт");

				ComboBox3->Items->Add("МЕТРИЧЕСКАЯ СИСТЕМА: ");
				ComboBox3->Items->Add("Километр (км)");
				ComboBox3->Items->Add("Метр (м)");
				ComboBox3->Items->Add("Дециметр (дм)");
				ComboBox3->Items->Add("Сантиметр (см)");
				ComboBox3->Items->Add("Миллиметр (мм)");
				ComboBox3->Items->Add("Микрометр (мкм)");
				ComboBox3->Items->Add("Нанометр (нм)");
				ComboBox3->Items->Add("Ангстрем (А)");
				ComboBox3->Items->Add("США И БРИТАНИЯ: ");
				ComboBox3->Items->Add("Лиг/льё");
				ComboBox3->Items->Add("Миля (mi)");
				ComboBox3->Items->Add("Фарлонг");
				ComboBox3->Items->Add("Чейн");
				ComboBox3->Items->Add("Род");
				ComboBox3->Items->Add("Перч");
				ComboBox3->Items->Add("Эль");
				ComboBox3->Items->Add("Ярд (yd)");
				ComboBox3->Items->Add("Кубит");
				ComboBox3->Items->Add("Фут (ft)");
				ComboBox3->Items->Add("Спан");
				ComboBox3->Items->Add("Линк");
				ComboBox3->Items->Add("хенд/рука");
				ComboBox3->Items->Add("Палм/ладонь");
				ComboBox3->Items->Add("Нейл/ноготь");
				ComboBox3->Items->Add("Дюйм (in)");
				ComboBox3->Items->Add("Фингер/палец");
				ComboBox3->Items->Add("Диджит");
				ComboBox3->Items->Add("Барлейкорн");
				ComboBox3->Items->Add("Линия");
				ComboBox3->Items->Add("Мил");
				ComboBox3->Items->Add("Микродюйм");
				ComboBox3->Items->Add("СТАРОРУССКАЯ СИСТЕМА: ");
				ComboBox3->Items->Add("Миля");
				ComboBox3->Items->Add("Верста");
				ComboBox3->Items->Add("Межевая верста");
				ComboBox3->Items->Add("Косая сажень");
				ComboBox3->Items->Add("Сажень");
				ComboBox3->Items->Add("Маховая сажень");
				ComboBox3->Items->Add("Аршин");
				ComboBox3->Items->Add("Локоть");
				ComboBox3->Items->Add("Фут");
				ComboBox3->Items->Add("Линия");
				ComboBox3->Items->Add("Дюйм");
				ComboBox3->Items->Add("Вершок");
				ComboBox3->Items->Add("Пядь");
				ComboBox3->Items->Add("МОРСКИЕ ЕДИНИЦЫ: ");
				ComboBox3->Items->Add("Морская лига/лье");
				ComboBox3->Items->Add("Морская миля");
				ComboBox3->Items->Add("Кабельтов");
				ComboBox3->Items->Add("Фатом/морская сажень");
				ComboBox3->Items->Add("АСТРОНОМИЧЕСКИЕ ЕДИНИЦЫ: ");
				ComboBox3->Items->Add("Красное смещение");
				ComboBox3->Items->Add("Парсек");
				ComboBox3->Items->Add("Световой год");
				ComboBox3->Items->Add("Астрономическая единица");
				ComboBox3->Items->Add("Световая минута");
				ComboBox3->Items->Add("Световая секунда");
				ComboBox3->Items->Add("ТИПОГРАФСКИЕ ЕДИНИЦЫ: ");
				ComboBox3->Items->Add("Пика");
				ComboBox3->Items->Add("Пункт (pt)");
				ComboBox3->Items->Add("Пиксель (px)");
				ComboBox3->Items->Add("Твип");
				ComboBox3->Items->Add("Цицеро");
				ComboBox3->Items->Add("Пункт");
		}

		if(s=="Объем")
		{
				ComboBox2->Items->Add("МЕТРИЧЕСКАЯ СИСТЕМА: ");
				ComboBox2->Items->Add("Кубический километр (км^3)");
				ComboBox2->Items->Add("Кубический метр (м^3)");
				ComboBox2->Items->Add("Кубический дециметр (дм^3)");
				ComboBox2->Items->Add("Кубический сантиметр (см^3)");
				ComboBox2->Items->Add("Кубический миллиметр (мм^3)");
				ComboBox2->Items->Add("Гектолитр (гл)");
				ComboBox2->Items->Add("Декалитр (дал)");
				ComboBox2->Items->Add("Литр (л)");
				ComboBox2->Items->Add("Децилитр (дл)");
				ComboBox2->Items->Add("Сантилитр (сл)");
				ComboBox2->Items->Add("Миллилитр (мл)");
				ComboBox2->Items->Add("Микролитр (мкл)");
				ComboBox2->Items->Add("БРИТАНСКАЯ МЕРА: ");
				ComboBox2->Items->Add("Перч");
				ComboBox2->Items->Add("Баррель (сухой)");
				ComboBox2->Items->Add("Бушель (bu)");
				ComboBox2->Items->Add("Пек");
				ComboBox2->Items->Add("Галлон (gal)");
				ComboBox2->Items->Add("Кварта");
				ComboBox2->Items->Add("Пинта (pt)");
				ComboBox2->Items->Add("Жидкая унция");
				ComboBox2->Items->Add("КУЛИНАРНЫЕ ЕДИНИЦЫ: ");
				ComboBox2->Items->Add("Стакан");
				ComboBox2->Items->Add("Столовая ложка");
				ComboBox2->Items->Add("Чайная ложка");
				ComboBox2->Items->Add("США: ");
				ComboBox2->Items->Add("Акр-фут");
				ComboBox2->Items->Add("Баррель(нефтяной) (bbl)");
				ComboBox2->Items->Add("Галлон (gal)");
				ComboBox2->Items->Add("Кварта");
				ComboBox2->Items->Add("Пинта (pt)");
				ComboBox2->Items->Add("Гилл");
				ComboBox2->Items->Add("Жидкая унция");
				ComboBox2->Items->Add("Жидкая драхма");
				ComboBox2->Items->Add("Миним");
				ComboBox2->Items->Add("БРИТАНСКИЕ И АМЕРИКАНСКИЕ ОТ ЕДИНИЦ ДЛИНЫ: ");
				ComboBox2->Items->Add("Кубический ярд (yd^3)");
				ComboBox2->Items->Add("Кубический фут (ft^3)");
				ComboBox2->Items->Add("Кубический дюйм (in^3)");
				ComboBox2->Items->Add("СТАРОРУССКАЯ МЕРА ЖИДКОСТИ: ");
				ComboBox2->Items->Add("Ведро");
				ComboBox2->Items->Add("Штоф (кружка)");
				ComboBox2->Items->Add("Четверть");
				ComboBox2->Items->Add("Винная бутылка");
				ComboBox2->Items->Add("Водочная бутылка");
				ComboBox2->Items->Add("Чарка");
				ComboBox2->Items->Add("Шкалик");

				ComboBox3->Items->Add("МЕТРИЧЕСКАЯ СИСТЕМА: ");
				ComboBox3->Items->Add("Кубический километр (км^3)");
				ComboBox3->Items->Add("Кубический метр (м^3)");
				ComboBox3->Items->Add("Кубический дециметр (дм^3)");
				ComboBox3->Items->Add("Кубический сантиметр (см^3)");
				ComboBox3->Items->Add("Кубический миллиметр (мм^3)");
				ComboBox3->Items->Add("Гектолитр (гл)");
				ComboBox3->Items->Add("Декалитр (дал)");
				ComboBox3->Items->Add("Литр (л)");
				ComboBox3->Items->Add("Децилитр (дл)");
				ComboBox3->Items->Add("Сантилитр (сл)");
				ComboBox3->Items->Add("Миллилитр (мл)");
				ComboBox3->Items->Add("Микролитр (мкл)");
				ComboBox3->Items->Add("БРИТАНСКАЯ МЕРА: ");
				ComboBox3->Items->Add("Перч");
				ComboBox3->Items->Add("Баррель (сухой)");
				ComboBox3->Items->Add("Бушель (bu)");
				ComboBox3->Items->Add("Пек");
				ComboBox3->Items->Add("Галлон (gal)");
				ComboBox3->Items->Add("Кварта");
				ComboBox3->Items->Add("Пинта (pt)");
				ComboBox3->Items->Add("Жидкая унция");
				ComboBox3->Items->Add("КУЛИНАРНЫЕ ЕДИНИЦЫ: ");
				ComboBox3->Items->Add("Стакан");
				ComboBox3->Items->Add("Столовая ложка");
				ComboBox3->Items->Add("Чайная ложка");
				ComboBox3->Items->Add("США: ");
				ComboBox3->Items->Add("Акр-фут");
				ComboBox3->Items->Add("Баррель(нефтяной) (bbl)");
				ComboBox3->Items->Add("Галлон (gal)");
				ComboBox3->Items->Add("Кварта");
				ComboBox3->Items->Add("Пинта (pt)");
				ComboBox3->Items->Add("Гилл");
				ComboBox3->Items->Add("Жидкая унция");
				ComboBox3->Items->Add("Жидкая драхма");
				ComboBox3->Items->Add("Миним");
				ComboBox3->Items->Add("БРИТАНСКИЕ И АМЕРИКАНСКИЕ ОТ ЕДИНИЦ ДЛИНЫ: ");
				ComboBox3->Items->Add("Кубический ярд (yd^3)");
				ComboBox3->Items->Add("Кубический фут (ft^3)");
				ComboBox3->Items->Add("Кубический дюйм (in^3)");
				ComboBox3->Items->Add("СТАРОРУССКАЯ МЕРА ЖИДКОСТИ: ");
				ComboBox3->Items->Add("Ведро");
				ComboBox3->Items->Add("Штоф (кружка)");
				ComboBox3->Items->Add("Четверть");
				ComboBox3->Items->Add("Винная бутылка");
				ComboBox3->Items->Add("Водочная бутылка");
				ComboBox3->Items->Add("Чарка");
				ComboBox3->Items->Add("Шкалик");
		}

		if(s=="Давление")
		{
				ComboBox2->Items->Add("МЕТРИЧЕСКАЯ СИСТЕМА: ");
				ComboBox2->Items->Add("Бар");
				ComboBox2->Items->Add("Килопаскаль (кПа)");
				ComboBox2->Items->Add("Гектопаскаль (гПа)");
				ComboBox2->Items->Add("Мегапаскаль (МПа)");
				ComboBox2->Items->Add("Миллибар (мбар)");
				ComboBox2->Items->Add("Паскаль (Па)");
				ComboBox2->Items->Add("Килограмм силы на см^2");
				ComboBox2->Items->Add("Килограмм силы на м^2");
				ComboBox2->Items->Add("Ньютон на м^2");
				ComboBox2->Items->Add("Килоньютон на м^2");
				ComboBox2->Items->Add("Меганьютон на м^2");
				ComboBox2->Items->Add("Ньютон на см^2");
				ComboBox2->Items->Add("Ньютон на мм^2");
				ComboBox2->Items->Add("ЕДИНИЦЫ РТУТНОГО СТОЛБА: ");
				ComboBox2->Items->Add("Дюйм ртутного столба");
				ComboBox2->Items->Add("Сантиметр ртутного столба");
				ComboBox2->Items->Add("Миллиметр ртутного столба");
				ComboBox2->Items->Add("БРИТАНСКИЕ И АМЕРИКАНСКИЕ ЕДИНИЦЫ: ");
				ComboBox2->Items->Add("1000 фунтов на дюйм^2");
				ComboBox2->Items->Add("Фунт на дюйм^2");
				ComboBox2->Items->Add("Фунт на фут^2");
				ComboBox2->Items->Add("Тонна силы на дюйм^2");
				ComboBox2->Items->Add("Тонна силы на фут^2");
				ComboBox2->Items->Add("Британская тонна на дюйм^2");
				ComboBox2->Items->Add("Британская тонна на фут^2");
				ComboBox2->Items->Add("АТМОСФЕРА: ");
				ComboBox2->Items->Add("Физическая атмосфера (атм)");
				ComboBox2->Items->Add("Техническая атмосфера (ат)");
				ComboBox2->Items->Add("ВОДА ПРИ 4°C, 39.2°F: ");
				ComboBox2->Items->Add("Метр водяного столба");
				ComboBox2->Items->Add("Сантиметр водяного столба");
				ComboBox2->Items->Add("Миллиметр водяного столба");
				ComboBox2->Items->Add("Фут водяного столба");
				ComboBox2->Items->Add("Дюйм водяного столба");

				ComboBox3->Items->Add("МЕТРИЧЕСКАЯ СИСТЕМА: ");
				ComboBox3->Items->Add("Бар");
				ComboBox3->Items->Add("Килопаскаль (кПа)");
				ComboBox3->Items->Add("Гектопаскаль (гПа)");
				ComboBox3->Items->Add("Мегапаскаль (МПа)");
				ComboBox3->Items->Add("Миллибар (мбар)");
				ComboBox3->Items->Add("Паскаль (Па)");
				ComboBox3->Items->Add("Килограмм силы на см^2");
				ComboBox3->Items->Add("Килограмм силы на м^2");
				ComboBox3->Items->Add("Ньютон на м^2");
				ComboBox3->Items->Add("Килоньютон на м^2");
				ComboBox3->Items->Add("Меганьютон на м^2");
				ComboBox3->Items->Add("Ньютон на см^2");
				ComboBox3->Items->Add("Ньютон на мм^2");
				ComboBox3->Items->Add("ЕДИНИЦЫ РТУТНОГО СТОЛБА: ");
				ComboBox3->Items->Add("Дюйм ртутного столба");
				ComboBox3->Items->Add("Сантиметр ртутного столба");
				ComboBox3->Items->Add("Миллиметр ртутного столба");
				ComboBox3->Items->Add("БРИТАНСКИЕ И АМЕРИКАНСКИЕ ЕДИНИЦЫ: ");
				ComboBox3->Items->Add("1000 фунтов на дюйм^2");
				ComboBox3->Items->Add("Фунт на дюйм^2");
				ComboBox3->Items->Add("Фунт на фут^2");
				ComboBox3->Items->Add("Тонна силы на дюйм^2");
				ComboBox3->Items->Add("Тонна силы на фут^2");
				ComboBox3->Items->Add("Британская тонна на дюйм^2");
				ComboBox3->Items->Add("Британская тонна на фут^2");
				ComboBox3->Items->Add("АТМОСФЕРА: ");
				ComboBox3->Items->Add("Физическая атмосфера (атм)");
				ComboBox3->Items->Add("Техническая атмосфера (ат)");
				ComboBox3->Items->Add("ВОДА ПРИ 4°C, 39.2°F: ");
				ComboBox3->Items->Add("Метр водяного столба");
				ComboBox3->Items->Add("Сантиметр водяного столба");
				ComboBox3->Items->Add("Миллиметр водяного столба");
				ComboBox3->Items->Add("Фут водяного столба");
				ComboBox3->Items->Add("Дюйм водяного столба");
        }

		if(s=="Скорость")
        {
				ComboBox2->Items->Add("МЕТРИЧЕСКИЕ ЕДИНИЦЫ: ");
				ComboBox2->Items->Add("Километр в секунду (км/с)");
				ComboBox2->Items->Add("Километр в минуту (км/мин)");
				ComboBox2->Items->Add("Метр в секунду (м/с)");
				ComboBox2->Items->Add("Километр в час (км/ч)");
				ComboBox2->Items->Add("Метр в минуту (м/мин)");
				ComboBox2->Items->Add("Метр в час (м/час)");
				ComboBox2->Items->Add("МОРСКИЕ ЕДИНИЦЫ: ");
				ComboBox2->Items->Add("Узел");
				ComboBox2->Items->Add("Морская миля в час");
				ComboBox2->Items->Add("АМЕРИКАНСКИЕ И АНГЛИЙСКИЕ ЕДИНИЦЫ: ");
				ComboBox2->Items->Add("Миля в секунду (mps)");
				ComboBox2->Items->Add("Миля в час (mph)");
				ComboBox2->Items->Add("Фут в секунду (ft/s)");
				ComboBox2->Items->Add("Фут в минуту (ft/min)");
				ComboBox2->Items->Add("СКОРОСТЬ ЗВУКА: ");
				ComboBox2->Items->Add("Скорость в махах (M)");
				ComboBox2->Items->Add("Скорость звука в воздухе");
				ComboBox2->Items->Add("Скорость звука в воде");
				ComboBox2->Items->Add("Первая космическая скорость");
				ComboBox2->Items->Add("Вторая космическая скорость");
				ComboBox2->Items->Add("Скорость света в вакууме");

				ComboBox3->Items->Add("МЕТРИЧЕСКИЕ ЕДИНИЦЫ: ");
				ComboBox3->Items->Add("Километр в секунду (км/с)");
				ComboBox3->Items->Add("Километр в минуту (км/мин)");
				ComboBox3->Items->Add("Метр в секунду (м/с)");
				ComboBox3->Items->Add("Километр в час (км/ч)");
				ComboBox3->Items->Add("Метр в минуту (м/мин)");
				ComboBox3->Items->Add("Метр в час (м/час)");
				ComboBox3->Items->Add("МОРСКИЕ ЕДИНИЦЫ: ");
				ComboBox3->Items->Add("Узел");
				ComboBox3->Items->Add("Морская миля в час");
				ComboBox3->Items->Add("АМЕРИКАНСКИЕ И АНГЛИЙСКИЕ ЕДИНИЦЫ: ");
				ComboBox3->Items->Add("Миля в секунду (mps)");
				ComboBox3->Items->Add("Миля в час (mph)");
				ComboBox3->Items->Add("Фут в секунду (ft/s)");
				ComboBox3->Items->Add("Фут в минуту (ft/min)");
				ComboBox3->Items->Add("СКОРОСТЬ ЗВУКА: ");
				ComboBox3->Items->Add("Скорость в махах (M)");
				ComboBox3->Items->Add("Скорость звука в воздухе");
				ComboBox3->Items->Add("Скорость звука в воде");
				ComboBox3->Items->Add("Первая космическая скорость");
				ComboBox3->Items->Add("Вторая космическая скорость");
				ComboBox3->Items->Add("Скорость света в вакууме");
        }
		if(s=="Валюта")
		{
				ComboBox2->Items->Add("Доллар США(USD)");
				ComboBox2->Items->Add("Евро(EUR)");
				ComboBox2->Items->Add("Белорусские рубли(BYN)");
				ComboBox2->Items->Add("Турецкая лира(TRY)");
				ComboBox2->Items->Add("Украинская гривна(UAH)");
				ComboBox2->Items->Add("Фунт стерлингов Соединенного королевства(GBP)");
				ComboBox2->Items->Add("Российский рубль(RUB)");

				ComboBox3->Items->Add("Доллар США(USD)");
				ComboBox3->Items->Add("Евро(EUR)");
				ComboBox3->Items->Add("Белорусские рубли(BYN)");
				ComboBox3->Items->Add("Турецкая лира(TRY)");
				ComboBox3->Items->Add("Украинская гривна(UAH)");
				ComboBox3->Items->Add("Фунт стерлингов Соединенного королевства(GBP)");
				ComboBox3->Items->Add("Российский рубль(RUB)");
        }
		if(s=="Площадь")
        {
				ComboBox2->Items->Add("МЕТРИЧЕСКАЯ СИСТЕМА: ");
				ComboBox2->Items->Add("Квадратный километр (км^2)");
				ComboBox2->Items->Add("Гектар (га)");
				ComboBox2->Items->Add("Декар");
				ComboBox2->Items->Add("Сотка");
				ComboBox2->Items->Add("Ар (а)");
				ComboBox2->Items->Add("Квадратный метр (м^2)");
				ComboBox2->Items->Add("Квадратный дециметр (дм^2)");
				ComboBox2->Items->Add("Квадратный сантиметр (см^2)");
				ComboBox2->Items->Add("Квадратный миллиметр (мм^2)");
				ComboBox2->Items->Add("Барн");
				ComboBox2->Items->Add("СТАРОРУССКАЯ СИСТЕМА: ");
				ComboBox2->Items->Add("Десятина казенная");
				ComboBox2->Items->Add("Десятина хозяйственная");
				ComboBox2->Items->Add("Квадратная верста");
				ComboBox2->Items->Add("Квадратный аршин");
				ComboBox2->Items->Add("Квадратный фут");
				ComboBox2->Items->Add("БРИТАНСКИЕ И АМЕРИКАНСКИЕ ЕДИНИЦЫ: ");
				ComboBox2->Items->Add("Тауншип");
				ComboBox2->Items->Add("Квадратная миля (mi^2)");
				ComboBox2->Items->Add("Хомстед");
				ComboBox2->Items->Add("Акр");
				ComboBox2->Items->Add("Руд");
				ComboBox2->Items->Add("Квадратный род");
				ComboBox2->Items->Add("Перч");
				ComboBox2->Items->Add("Квадратный ярд (yd^2)");
				ComboBox2->Items->Add("Квадратный фут (ft^2)");
				ComboBox2->Items->Add("Квадратный дюйм (in^2)");
				ComboBox2->Items->Add("ДРУГИЕ: ");
				ComboBox2->Items->Add("Клетка в тетради");

				ComboBox3->Items->Add("МЕТРИЧЕСКАЯ СИСТЕМА: ");
				ComboBox3->Items->Add("Квадратный километр (км^2)");
				ComboBox3->Items->Add("Гектар (га)");
				ComboBox3->Items->Add("Декар");
				ComboBox3->Items->Add("Сотка");
				ComboBox3->Items->Add("Ар (а)");
				ComboBox3->Items->Add("Квадратный метр (м^2)");
				ComboBox3->Items->Add("Квадратный дециметр (дм^2)");
				ComboBox3->Items->Add("Квадратный сантиметр (см^2)");
				ComboBox3->Items->Add("Квадратный миллиметр (мм^2)");
				ComboBox3->Items->Add("Барн");
				ComboBox3->Items->Add("СТАРОРУССКАЯ СИСТЕМА: ");
				ComboBox3->Items->Add("Десятина казенная");
				ComboBox3->Items->Add("Десятина хозяйственная");
				ComboBox3->Items->Add("Квадратная верста");
				ComboBox3->Items->Add("Квадратный аршин");
				ComboBox3->Items->Add("Квадратный фут");
				ComboBox3->Items->Add("БРИТАНСКИЕ И АМЕРИКАНСКИЕ ЕДИНИЦЫ: ");
				ComboBox3->Items->Add("Тауншип");
				ComboBox3->Items->Add("Квадратная миля (mi^2)");
				ComboBox3->Items->Add("Хомстед");
				ComboBox3->Items->Add("Акр");
				ComboBox3->Items->Add("Руд");
				ComboBox3->Items->Add("Квадратный род");
				ComboBox3->Items->Add("Перч");
				ComboBox3->Items->Add("Квадратный ярд (yd^2)");
				ComboBox3->Items->Add("Квадратный фут (ft^2)");
				ComboBox3->Items->Add("Квадратный дюйм (in^2)");
				ComboBox3->Items->Add("ДРУГИЕ: ");
				ComboBox3->Items->Add("Клетка в тетради");
		}
		if(s=="Вес")
		{
				ComboBox2->Items->Add("МЕТРИЧЕСКАЯ СИСТЕМА: ");
				ComboBox2->Items->Add("Килотонна (кт)");
				ComboBox2->Items->Add("Тонна (т)");
				ComboBox2->Items->Add("Килоньютон на Земле (кН)");
				ComboBox2->Items->Add("Центнер (ц)");
				ComboBox2->Items->Add("Килограмм (кг)");
				ComboBox2->Items->Add("Ньютон на Земле (Н)");
				ComboBox2->Items->Add("Карат (кар)");
				ComboBox2->Items->Add("Грамм (г)");
				ComboBox2->Items->Add("Сантиграмм (сг)");
				ComboBox2->Items->Add("Миллиграмм (мг)");
				ComboBox2->Items->Add("Микрограмм (мкг)");
				ComboBox2->Items->Add("Единица атомной массы (u)");
				ComboBox2->Items->Add("АМЕРИКАНСКАЯ СИСТЕМА - AVOIRDUPOIS: ");
				ComboBox2->Items->Add("Длинная тонна");
				ComboBox2->Items->Add("Короткая тонна");
				ComboBox2->Items->Add("Длинный центнер");
				ComboBox2->Items->Add("Короткий центнер");
				ComboBox2->Items->Add("Стоун (st)");
				ComboBox2->Items->Add("Фунт (lb)");
				ComboBox2->Items->Add("Унция (oz)");
				ComboBox2->Items->Add("Драхма (dr)");
				ComboBox2->Items->Add("Гран (gr)");
				ComboBox2->Items->Add("ТРОЙСКАЯ СИСТЕМА: ");
				ComboBox2->Items->Add("Фунт");
				ComboBox2->Items->Add("Унция (ozt)");
				ComboBox2->Items->Add("Пеннивейт");
				ComboBox2->Items->Add("Английский карат");
				ComboBox2->Items->Add("Гран");
				ComboBox2->Items->Add("Майт");
				ComboBox2->Items->Add("Дойт");
				ComboBox2->Items->Add("СТАРОРУССКАЯ СИСТЕМА: ");
				ComboBox2->Items->Add("Берковец");
				ComboBox2->Items->Add("Пуд");
				ComboBox2->Items->Add("Фунт");
				ComboBox2->Items->Add("Лот");
				ComboBox2->Items->Add("Золотник");
				ComboBox2->Items->Add("Доля");
				ComboBox2->Items->Add("БРИТАНСКАЯ АПТЕЧНАЯ СИСТЕМА  - APOTHECARIES: ");
				ComboBox2->Items->Add("Фунт");
				ComboBox2->Items->Add("Унция");
				ComboBox2->Items->Add("Драхма");
				ComboBox2->Items->Add("Скрупул");
				ComboBox2->Items->Add("Гран");

				ComboBox3->Items->Add("МЕТРИЧЕСКАЯ СИСТЕМА: ");
				ComboBox3->Items->Add("Килотонна (кт)");
				ComboBox3->Items->Add("Тонна (т)");
				ComboBox3->Items->Add("Килоньютон на Земле (кН)");
				ComboBox3->Items->Add("Центнер (ц)");
				ComboBox3->Items->Add("Килограмм (кг)");
				ComboBox3->Items->Add("Ньютон на Земле (Н)");
				ComboBox3->Items->Add("Карат (кар)");
				ComboBox3->Items->Add("Грамм (г)");
				ComboBox3->Items->Add("Сантиграмм (сг)");
				ComboBox3->Items->Add("Миллиграмм (мг)");
				ComboBox3->Items->Add("Микрограмм (мкг)");
				ComboBox3->Items->Add("Единица атомной массы (u)");
				ComboBox3->Items->Add("АМЕРИКАНСКАЯ СИСТЕМА - AVOIRDUPOIS: ");
				ComboBox3->Items->Add("Длинная тонна");
				ComboBox3->Items->Add("Короткая тонна");
				ComboBox3->Items->Add("Длинный центнер");
				ComboBox3->Items->Add("Короткий центнер");
				ComboBox3->Items->Add("Стоун (st)");
				ComboBox3->Items->Add("Фунт (lb)");
				ComboBox3->Items->Add("Унция (oz)");
				ComboBox3->Items->Add("Драхма (dr)");
				ComboBox3->Items->Add("Гран (gr)");
				ComboBox3->Items->Add("ТРОЙСКАЯ СИСТЕМА: ");
				ComboBox3->Items->Add("Фунт");
				ComboBox3->Items->Add("Унция (ozt)");
				ComboBox3->Items->Add("Пеннивейт");
				ComboBox3->Items->Add("Английский карат");
				ComboBox3->Items->Add("Гран");
				ComboBox3->Items->Add("Майт");
				ComboBox3->Items->Add("Дойт");
				ComboBox3->Items->Add("СТАРОРУССКАЯ СИСТЕМА: ");
				ComboBox3->Items->Add("Берковец");
				ComboBox3->Items->Add("Пуд");
				ComboBox3->Items->Add("Фунт");
				ComboBox3->Items->Add("Лот");
				ComboBox3->Items->Add("Золотник");
				ComboBox3->Items->Add("Доля");
				ComboBox3->Items->Add("БРИТАНСКАЯ АПТЕЧНАЯ СИСТЕМА  - APOTHECARIES: ");
				ComboBox3->Items->Add("Фунт");
				ComboBox3->Items->Add("Унция");
				ComboBox3->Items->Add("Драхма");
				ComboBox3->Items->Add("Скрупул");
				ComboBox3->Items->Add("Гран");
        }
		if(s=="Время")
        {
				ComboBox2->Items->Add("Век");
				ComboBox2->Items->Add("Год григорианский");
				ComboBox2->Items->Add("Год юлианский");
				ComboBox2->Items->Add("Год (365 дней)");
				ComboBox2->Items->Add("Год високосный");
				ComboBox2->Items->Add("Календарный месяц");
				ComboBox2->Items->Add("Неделя");
				ComboBox2->Items->Add("Декада");
				ComboBox2->Items->Add("Сутки");
				ComboBox2->Items->Add("Час");
				ComboBox2->Items->Add("Минута");
				ComboBox2->Items->Add("Секунда");
				ComboBox2->Items->Add("Миллисекунда");
				ComboBox2->Items->Add("Микросекунда");
				ComboBox2->Items->Add("Наносекунда");

				ComboBox3->Items->Add("Век");
				ComboBox3->Items->Add("Год григорианский");
				ComboBox3->Items->Add("Год юлианский");
				ComboBox3->Items->Add("Год (365 дней)");
				ComboBox3->Items->Add("Год високосный");
				ComboBox3->Items->Add("Календарный месяц");
				ComboBox3->Items->Add("Неделя");
				ComboBox3->Items->Add("Декада");
				ComboBox3->Items->Add("Сутки");
				ComboBox3->Items->Add("Час");
				ComboBox3->Items->Add("Минута");
				ComboBox3->Items->Add("Секунда");
				ComboBox3->Items->Add("Миллисекунда");
				ComboBox3->Items->Add("Микросекунда");
				ComboBox3->Items->Add("Наносекунда");
        }
		if(s=="Температура")
        {
				ComboBox2->Items->Add("Градус Цельсия (°C)");
				ComboBox2->Items->Add("Градус Фаренгейта (°F)");
				ComboBox2->Items->Add("Кельвин (K)");
				ComboBox2->Items->Add("Градус Реомюра (°Re)");

				ComboBox3->Items->Add("Градус Цельсия (°C)");
				ComboBox3->Items->Add("Градус Фаренгейта (°F)");
				ComboBox3->Items->Add("Кельвин (K)");
				ComboBox3->Items->Add("Градус Реомюра (°Re)");
        }
		if(s=="Объем информации")
		{
				ComboBox2->Items->Add("БАЙТЫ: ");
				ComboBox2->Items->Add("Эксабайт (EB)");
				ComboBox2->Items->Add("Петабайт (PB)");
				ComboBox2->Items->Add("Терабайт (TB)");
				ComboBox2->Items->Add("Гигабайт (GB)");
				ComboBox2->Items->Add("Мегабайт (MB)");
				ComboBox2->Items->Add("Килобайт (KB)");
				ComboBox2->Items->Add("Байт (B)");
				ComboBox2->Items->Add("БИТЫ: ");
				ComboBox2->Items->Add("Эксабит (Ebit)");
				ComboBox2->Items->Add("Петабит (Pbit)");
				ComboBox2->Items->Add("Терабит (Tbit)");
				ComboBox2->Items->Add("Гигабит (Gbit)");
				ComboBox2->Items->Add("Мегабит (Mbit)");
				ComboBox2->Items->Add("Килобит (Kbit)");
				ComboBox2->Items->Add("Бит (bit)");

				ComboBox3->Items->Add("БАЙТЫ: ");
				ComboBox3->Items->Add("Эксабайт (EB)");
				ComboBox3->Items->Add("Петабайт (PB)");
				ComboBox3->Items->Add("Терабайт (TB)");
				ComboBox3->Items->Add("Гигабайт (GB)");
				ComboBox3->Items->Add("Мегабайт (MB)");
				ComboBox3->Items->Add("Килобайт (KB)");
				ComboBox3->Items->Add("Байт (B)");
				ComboBox3->Items->Add("БИТЫ: ");
				ComboBox3->Items->Add("Эксабит (Ebit)");
				ComboBox3->Items->Add("Петабит (Pbit)");
				ComboBox3->Items->Add("Терабит (Tbit)");
				ComboBox3->Items->Add("Гигабит (Gbit)");
				ComboBox3->Items->Add("Мегабит (Mbit)");
				ComboBox3->Items->Add("Килобит (Kbit)");
				ComboBox3->Items->Add("Бит (bit)");
        }
		if(s=="Мощность")
		{
				ComboBox2->Items->Add("СГС И ВНЕСИСТЕМНЫЕ ЕДИНИЦЫ: ");
				ComboBox2->Items->Add("Гигакалорий в секунду");
				ComboBox2->Items->Add("Килокалорий в секунду");
				ComboBox2->Items->Add("Калорий в секунду");
				ComboBox2->Items->Add("Гигакалорий в час");
				ComboBox2->Items->Add("Килокалорий в час");
				ComboBox2->Items->Add("Калорий в час");
				ComboBox2->Items->Add("Метрическая лошадиная сила (hpM)");
				ComboBox2->Items->Add("Котловая лошадиная сила (hpS)");
				ComboBox2->Items->Add("Электрическая лошадиная сила (hpE)");
				ComboBox2->Items->Add("Гидравлическая лошадиная сила");
				ComboBox2->Items->Add("Механическая лошадиная сила (hpI)");
				ComboBox2->Items->Add("Килограмм-сила метр в сек (кгс*м/с)");
				ComboBox2->Items->Add("Джоуль в секунду");
				ComboBox2->Items->Add("Джоуль в час");
				ComboBox2->Items->Add("Эрг в секунду");
				ComboBox2->Items->Add("Метрическая тонна охлаждения");
				ComboBox2->Items->Add("МЕЖДУНАРОДНАЯ СИСТЕМА СИ: ");
				ComboBox2->Items->Add("Мегаватт (МВт)");
				ComboBox2->Items->Add("Киловатт (кВт)");
				ComboBox2->Items->Add("Ватт (Вт)");
				ComboBox2->Items->Add("Вольт-ампер (В-А)");

				ComboBox3->Items->Add("СГС И ВНЕСИСТЕМНЫЕ ЕДИНИЦЫ: ");
				ComboBox3->Items->Add("Гигакалорий в секунду");
				ComboBox3->Items->Add("Килокалорий в секунду");
				ComboBox3->Items->Add("Калорий в секунду");
				ComboBox3->Items->Add("Гигакалорий в час");
				ComboBox3->Items->Add("Килокалорий в час");
				ComboBox3->Items->Add("Калорий в час");
				ComboBox3->Items->Add("Метрическая лошадиная сила (hpM)");
				ComboBox3->Items->Add("Котловая лошадиная сила (hpS)");
				ComboBox3->Items->Add("Электрическая лошадиная сила (hpE)");
				ComboBox3->Items->Add("Гидравлическая лошадиная сила");
				ComboBox3->Items->Add("Механическая лошадиная сила (hpI)");
				ComboBox3->Items->Add("Килограмм-сила метр в сек (кгс*м/с)");
				ComboBox3->Items->Add("Джоуль в секунду");
				ComboBox3->Items->Add("Джоуль в час");
				ComboBox3->Items->Add("Эрг в секунду");
				ComboBox3->Items->Add("Метрическая тонна охлаждения");
				ComboBox3->Items->Add("МЕЖДУНАРОДНАЯ СИСТЕМА СИ: ");
				ComboBox3->Items->Add("Мегаватт (МВт)");
				ComboBox3->Items->Add("Киловатт (кВт)");
				ComboBox3->Items->Add("Ватт (Вт)");
				ComboBox3->Items->Add("Вольт-ампер (В-А)");
        }


		if(s=="Передача данных")
		{
			  ComboBox2->Items->Add("ЕДИНИЦЫ НА БАЗЕ БАЙТА: ");
			  ComboBox2->Items->Add("Терабайт в секунду (TB/s)");
			  ComboBox2->Items->Add("Гигабайт в секунду (GB/s)");
			  ComboBox2->Items->Add("Мегабайт в секунду (MB/s)");
			  ComboBox2->Items->Add("Килобайт в секунду (KB/s)");
			  ComboBox2->Items->Add("Байт в секунду (B/s)");
			  ComboBox2->Items->Add("БАЗОВЫЕ ЕДИНИЦЫ СКОРОСТИ ПЕРЕДАЧИ ДАННЫХ: ");
			  ComboBox2->Items->Add("Терабит в секунду (Tbps)");
			  ComboBox2->Items->Add("Гигабит в секунду (Gbps)");
			  ComboBox2->Items->Add("Мегабит в секунду (Mbps)");
			  ComboBox2->Items->Add("Килобит в секунду (Kbps)");
			  ComboBox2->Items->Add("Бит в секунду (bps)");

			  ComboBox3->Items->Add("ЕДИНИЦЫ НА БАЗЕ БАЙТА: ");
			  ComboBox3->Items->Add("Терабайт в секунду (TB/s)");
			  ComboBox3->Items->Add("Гигабайт в секунду (GB/s)");
			  ComboBox3->Items->Add("Мегабайт в секунду (MB/s)");
			  ComboBox3->Items->Add("Килобайт в секунду (KB/s)");
			  ComboBox3->Items->Add("Байт в секунду (B/s)");
			  ComboBox3->Items->Add("БАЗОВЫЕ ЕДИНИЦЫ СКОРОСТИ ПЕРЕДАЧИ ДАННЫХ: ");
			  ComboBox3->Items->Add("Терабит в секунду (Tbps)");
			  ComboBox3->Items->Add("Гигабит в секунду (Gbps)");
			  ComboBox3->Items->Add("Мегабит в секунду (Mbps)");
			  ComboBox3->Items->Add("Килобит в секунду (Kbps)");
			  ComboBox3->Items->Add("Бит в секунду (bps)");
		}

		if(s=="Плотность")
		{
			ComboBox2->Items->Add("МЕТРИЧЕСКИЕ ЕДИНИЦЫ: ");
			ComboBox2->Items->Add("Тонна на кубометр (т/м^3)");
			ComboBox2->Items->Add("Килограмм на кубометр (кг/м^3)");
			ComboBox2->Items->Add("Грамм на кубометр (г/м^3)");
			ComboBox2->Items->Add("Миллиграмм на кубометр (мг/м^3)");
			ComboBox2->Items->Add("Килограмм на литр (кг/л)");
			ComboBox2->Items->Add("Грамм на литр (г/л)");
			ComboBox2->Items->Add("Миллиграмм на литр (мг/л)");
			ComboBox2->Items->Add("Килограмм на кубический сантиметр (кг/см^3)");
			ComboBox2->Items->Add("Грамм на кубический сантиметр (г/см^3)");
			ComboBox2->Items->Add("Миллиграмм на кубический сантиметр (мг/см^3)");
			ComboBox2->Items->Add("Килограмм на миллилитр (кг/мл)");
			ComboBox2->Items->Add("Грамм на миллилитр (г/мл)");
			ComboBox2->Items->Add("БРИТАНСКИЕ И АМЕРИКАНСКИЕ ЕДИНИЦЫ: ");
			ComboBox2->Items->Add("Фунты на кубический фут (lb/ft^3)");
			ComboBox2->Items->Add("Фунты на кубический дюйм (lb/in^3)");
			ComboBox2->Items->Add("Фунты на галлон США (lb/gal)");
			ComboBox2->Items->Add("Унции на кубический дюйм (oz/in^3)");
			ComboBox2->Items->Add("Унции на галлон США (oz/gal)");

			ComboBox3->Items->Add("МЕТРИЧЕСКИЕ ЕДИНИЦЫ: ");
			ComboBox3->Items->Add("Тонна на кубометр (т/м^3)");
			ComboBox3->Items->Add("Килограмм на кубометр (кг/м^3)");
			ComboBox3->Items->Add("Грамм на кубометр (г/м^3)");
			ComboBox3->Items->Add("Миллиграмм на кубометр (мг/м^3)");
			ComboBox3->Items->Add("Килограмм на литр (кг/л)");
			ComboBox3->Items->Add("Грамм на литр (г/л)");
			ComboBox3->Items->Add("Миллиграмм на литр (мг/л)");
			ComboBox3->Items->Add("Килограмм на кубический сантиметр (кг/см^3)");
			ComboBox3->Items->Add("Грамм на кубический сантиметр (г/см^3)");
			ComboBox3->Items->Add("Миллиграмм на кубический сантиметр (мг/см^3)");
			ComboBox3->Items->Add("Килограмм на миллилитр (кг/мл)");
			ComboBox3->Items->Add("Грамм на миллилитр (г/мл)");
			ComboBox3->Items->Add("БРИТАНСКИЕ И АМЕРИКАНСКИЕ ЕДИНИЦЫ: ");
			ComboBox3->Items->Add("Фунты на кубический фут (lb/ft^3)");
			ComboBox3->Items->Add("Фунты на кубический дюйм (lb/in^3)");
			ComboBox3->Items->Add("Фунты на галлон США (lb/gal)");
			ComboBox3->Items->Add("Унции на кубический дюйм (oz/in^3)");
			ComboBox3->Items->Add("Унции на галлон США (oz/gal)");
		}

		if(s=="Энергия")
		{
			 ComboBox2->Items->Add("СГС И ВНЕСИСТЕМНЫЕ ЕДИНИЦЫ: ");
			 ComboBox2->Items->Add("Мегакалория (Mcal)");
			 ComboBox2->Items->Add("Килокалория (ккал)");
			 ComboBox2->Items->Add("Калория (кал)");
			 ComboBox2->Items->Add("Киловатт час (кВт*час)");
			 ComboBox2->Items->Add("Ватт час (Вт*час)");
			 ComboBox2->Items->Add("Ватт секунда (Вт*сек)");
			 ComboBox2->Items->Add("Эрг");
			 ComboBox2->Items->Add("Электронвольт (eV)");
			 ComboBox2->Items->Add("МЕЖДУНАРОДНАЯ СИСТЕМА СИ: ");
			 ComboBox2->Items->Add("Мегаджоуль (Мдж)");
			 ComboBox2->Items->Add("Килоджоуль (кдж)");
			 ComboBox2->Items->Add("Джоуль (дж)");
			 ComboBox2->Items->Add("Килограмм тротила");
			 ComboBox2->Items->Add("Час лошадиной силы (hp*h)");
			 ComboBox2->Items->Add("Метр-килограмм (mkg)");

			 ComboBox3->Items->Add("СГС И ВНЕСИСТЕМНЫЕ ЕДИНИЦЫ: ");
			 ComboBox3->Items->Add("Мегакалория (Mcal)");
			 ComboBox3->Items->Add("Килокалория (ккал)");
			 ComboBox3->Items->Add("Калория (кал)");
			 ComboBox3->Items->Add("Киловатт час (кВт*час)");
			 ComboBox3->Items->Add("Ватт час (Вт*час)");
			 ComboBox3->Items->Add("Ватт секунда (Вт*сек)");
			 ComboBox3->Items->Add("Эрг");
			 ComboBox3->Items->Add("Электронвольт (eV)");
			 ComboBox3->Items->Add("МЕЖДУНАРОДНАЯ СИСТЕМА СИ: ");
			 ComboBox3->Items->Add("Мегаджоуль (Мдж)");
			 ComboBox3->Items->Add("Килоджоуль (кдж)");
			 ComboBox3->Items->Add("Джоуль (дж)");
			 ComboBox3->Items->Add("Килограмм тротила");
			 ComboBox3->Items->Add("Час лошадиной силы (hp*h)");
			 ComboBox3->Items->Add("Метр-килограмм (mkg)");
		}

		if(s=="Сила")
		{
			 ComboBox2->Items->Add("СИСТЕМА СИ: ");
			 ComboBox2->Items->Add("Меганьютон (МН)");
			 ComboBox2->Items->Add("Килоньютон (кН)");
			 ComboBox2->Items->Add("Деканьютон (дН)");
			 ComboBox2->Items->Add("Ньютон (Н)");
			 ComboBox2->Items->Add("Миллиньютон (мН)");
			 ComboBox2->Items->Add("Микроньютон (µН)");
			 ComboBox2->Items->Add("АНГЛИЙСКИЕ ИНЖЕНЕРНЫЕ ЕДИНИЦЫ: ");
			 ComboBox2->Items->Add("Кип-сила (kipf)");
			 ComboBox2->Items->Add("Тонна-сила (tnf)");
			 ComboBox2->Items->Add("Фунт-сила (lbf)");
			 ComboBox2->Items->Add("Унция-сила (ozf)");
			 ComboBox2->Items->Add("ТЕХНИЧЕСКАЯ СИСТЕМА ЕДИНИЦ, МКГСС: ");
			 ComboBox2->Items->Add("Тонна-сила (тс)");
			 ComboBox2->Items->Add("Килопонд (kp)");
			 ComboBox2->Items->Add("Килограмм-сила (кгс)");
			 ComboBox2->Items->Add("Грейв-сила (Gf)");
			 ComboBox2->Items->Add("Грамм-сила (гс)");
			 ComboBox2->Items->Add("Миллигрейв-сила (mGf)");
			 ComboBox2->Items->Add("Гравет-сила (gf)");
			 ComboBox2->Items->Add("Миллиграмм-сила (мгс)");

			 ComboBox3->Items->Add("СИСТЕМА СИ: ");
			 ComboBox3->Items->Add("Меганьютон (МН)");
			 ComboBox3->Items->Add("Килоньютон (кН)");
			 ComboBox3->Items->Add("Деканьютон (дН)");
			 ComboBox3->Items->Add("Ньютон (Н)");
			 ComboBox3->Items->Add("Миллиньютон (мН)");
			 ComboBox3->Items->Add("Микроньютон (µН)");
			 ComboBox3->Items->Add("АНГЛИЙСКИЕ ИНЖЕНЕРНЫЕ ЕДИНИЦЫ: ");
			 ComboBox3->Items->Add("Кип-сила (kipf)");
			 ComboBox3->Items->Add("Тонна-сила (tnf)");
			 ComboBox3->Items->Add("Фунт-сила (lbf)");
			 ComboBox3->Items->Add("Унция-сила (ozf)");
			 ComboBox3->Items->Add("ТЕХНИЧЕСКАЯ СИСТЕМА ЕДИНИЦ, МКГСС: ");
			 ComboBox3->Items->Add("Тонна-сила (тс)");
			 ComboBox3->Items->Add("Килопонд (kp)");
			 ComboBox3->Items->Add("Килограмм-сила (кгс)");
			 ComboBox3->Items->Add("Грейв-сила (Gf)");
			 ComboBox3->Items->Add("Грамм-сила (гс)");
			 ComboBox3->Items->Add("Миллигрейв-сила (mGf)");
			 ComboBox3->Items->Add("Гравет-сила (gf)");
			 ComboBox3->Items->Add("Миллиграмм-сила (мгс)");
		}

		if(s=="Угловая мера")
		{
			 ComboBox2->Items->Add("Окружность");
			 ComboBox2->Items->Add("Секстант");
			 ComboBox2->Items->Add("Радиан (рад)");
			 ComboBox2->Items->Add("Градус (°)");
			 ComboBox2->Items->Add("Град (grad)");
			 ComboBox2->Items->Add("Минута (')");
			 ComboBox2->Items->Add("Секунда ('')");
			 ComboBox2->Items->Add("Румб");

			 ComboBox3->Items->Add("Окружность");
			 ComboBox3->Items->Add("Секстант");
			 ComboBox3->Items->Add("Радиан (рад)");
			 ComboBox3->Items->Add("Градус (°)");
			 ComboBox3->Items->Add("Град (grad)");
			 ComboBox3->Items->Add("Минута (')");
			 ComboBox3->Items->Add("Секунда ('')");
			 ComboBox3->Items->Add("Румб");
		}

		if(s=="Угловая скорость")
		{
			 ComboBox2->Items->Add("ОБОРОТЫ: ");
			 ComboBox2->Items->Add("Оборот в неделю");
			 ComboBox2->Items->Add("Оборот в сутки");
			 ComboBox2->Items->Add("Оборот в час");
			 ComboBox2->Items->Add("Оборот в минуту");
			 ComboBox2->Items->Add("Оборот в секунду");
			 ComboBox2->Items->Add("РАДИАНЫ: ");
			 ComboBox2->Items->Add("Радиан в неделю");
			 ComboBox2->Items->Add("Радиан в сутки");
			 ComboBox2->Items->Add("Радиан в час");
			 ComboBox2->Items->Add("Радиан в минуту");
			 ComboBox2->Items->Add("Радиан в секунду");
			 ComboBox2->Items->Add("ГРАДУСЫ: ");
			 ComboBox2->Items->Add("Градус в неделю");
			 ComboBox2->Items->Add("Градус в сутки");
			 ComboBox2->Items->Add("Градус в час");
			 ComboBox2->Items->Add("Градус в минуту");
			 ComboBox2->Items->Add("Градус в секунду");

			 ComboBox3->Items->Add("ОБОРОТЫ: ");
			 ComboBox3->Items->Add("Оборот в неделю");
			 ComboBox3->Items->Add("Оборот в сутки");
			 ComboBox3->Items->Add("Оборот в час");
			 ComboBox3->Items->Add("Оборот в минуту");
			 ComboBox3->Items->Add("Оборот в секунду");
			 ComboBox3->Items->Add("РАДИАНЫ: ");
			 ComboBox3->Items->Add("Радиан в неделю");
			 ComboBox3->Items->Add("Радиан в сутки");
			 ComboBox3->Items->Add("Радиан в час");
			 ComboBox3->Items->Add("Радиан в минуту");
			 ComboBox3->Items->Add("Радиан в секунду");
			 ComboBox3->Items->Add("ГРАДУСЫ: ");
			 ComboBox3->Items->Add("Градус в неделю");
			 ComboBox3->Items->Add("Градус в сутки");
			 ComboBox3->Items->Add("Градус в час");
			 ComboBox3->Items->Add("Градус в минуту");
			 ComboBox3->Items->Add("Градус в секунду");
        }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::ComboBox2Select(TObject *Sender)
{
        cb2=ComboBox2->Text;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ComboBox3Select(TObject *Sender)
{
        cb3=ComboBox3->Text;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
		float a,b;
		a=StrToFloat(Edit1->Text);
		//KM
		if((cb2=="Километр (км)")&&(cb3=="Километр (км)"))
		{
				a=a;
		}
		if((cb2=="Километр (км)")&&(cb3=="Метр (м)"))
        {
				a*=1000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Дециметр (дм)"))
        {
				a*=10000;
        }
		if((cb2=="Километр (км)")&&(cb3=="Сантиметр (см)"))
        {
				a*=100000;
        }
		if((cb2=="Километр (км)")&&(cb3=="Миллиметр (мм)"))
        {
				a*=1000000;
        }
		if((cb2=="Километр (км)")&&(cb3=="Микрометр (мкм)"))
        {
				a*=1000000000;
        }
		if((cb2=="Километр (км)")&&(cb3=="Нанометр (нм)"))
		{
				a*=1000000000000;
        }
		if((cb2=="Километр (км)")&&(cb3=="Ангстрем (А)"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Лиг/льё"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Миля (mi)"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Фарлонг"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Чейн"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Род"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Перч"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Эль"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Ярд (yd)"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Кубит"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Фут (ft)"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Спан"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Линк"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Хенд/рука"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Палм/ладонь"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Нейл/ноготь"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Дюйм (in)"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Фингер/палец"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Диджит"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Барлейкорн"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Линия"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Мил"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Микродюйм"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Миля"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Верста"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Межевая верста"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Косая сажень"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Сажень"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Маховая сажень"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Аршин"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Локоть"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Фут"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Линия"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Дюйм"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Вершок"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Пядь"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Морская лига/лье"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Морская миля"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Кабельтов"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Фатом/морская сажень"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Красное смещение"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Парсек"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Световой год"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Астрономическая единица"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Световая минута"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Световая секунда"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Пика"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Пункт (pt)"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Пиксель (px)"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Твип"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Цицеро"))
		{
				a*=10000000000000;
		}
		if((cb2=="Километр (км)")&&(cb3=="Пункт"))
		{
				a*=10000000000000;
		}



        //CM

		if((cb2=="cm")&&(cb3=="Километр (км)"))
        {
                a*=10;
        }
        if((cb2=="cm")&&(cb3=="dm"))
        {
                a/=10;
        }
        if((cb2=="cm")&&(cb3=="m"))
        {
                a/=100;
        }
        if((cb2=="cm")&&(cb3=="km"))
        {
                a/=100000;
        }
		if((cb2=="cm")&&(cb3=="inch"))
		{
				a/=2.54;
		}
		if((cb2=="cm")&&(cb3=="ft"))
		{
				a/=30.48;
		}
		if((cb2=="cm")&&(cb3=="yd"))
		{
				a/=91.44;
		}
		if((cb2=="cm")&&(cb3=="mile"))
		{
                a/=160934.4;
        }

       //DM

		if((cb2=="dm")&&(cb3=="Километр (км)"))
        {
                a*=100;
        }
        if((cb2=="dm")&&(cb3=="cm"))
        {
                a*=10;
        }
        if((cb2=="dm")&&(cb3=="m"))
        {
                a/=10;
        }
        if((cb2=="dm")&&(cb3=="km"))
        {
                a/=10000;
        }
        if((cb2=="dm")&&(cb3=="inch"))
        {
                a/=0.254;
        }
        if((cb2=="dm")&&(cb3=="ft"))
        {
                a/=3.048;
        }
        if((cb2=="dm")&&(cb3=="yd"))
        {
                a/=9.144;
        }
        if((cb2=="dm")&&(cb3=="mile"))
        {
                a/=16093.44;
        }


        //M
		if((cb2=="m")&&(cb3=="Километр (км)"))
        {
                a*=1000;
        }
        if((cb2=="m")&&(cb3=="cm"))
        {
                a*=100;
        }
        if((cb2=="m")&&(cb3=="dm"))
        {
                a*=10;
        }
        if((cb2=="m")&&(cb3=="km"))
        {
                a/=1000;
        }
        if((cb2=="m")&&(cb3=="inch"))
        {
                a*=39.37;
        }
        if((cb2=="m")&&(cb3=="ft"))
        {
                a*=3.281;
        }
        if((cb2=="m")&&(cb3=="yd"))
        {
                a*=1.094;
        }
        if((cb2=="m")&&(cb3=="mile"))
        {
                a/=1609.344;
        }


        //km

		if((cb2=="km")&&(cb3=="Километр (км)"))
        {
                a*=1000000;
        }
        if((cb2=="km")&&(cb3=="cm"))
        {
                a*=100000;
        }
        if((cb2=="km")&&(cb3=="dm"))
        {
                a*=10000;
        }
        if((cb2=="km")&&(cb3=="m"))
        {
                a*=1000;
        }
        if((cb2=="km")&&(cb3=="inch"))
        {
                a*=39370.079;
        }
        if((cb2=="km")&&(cb3=="ft"))
        {
                a*=3280.84;
        }
        if((cb2=="km")&&(cb3=="yd"))
        {
                a*=1093.613;
        }
        if((cb2=="km")&&(cb3=="mile"))
        {
                a/=1.609;
        }


        //inch

		if((cb2=="inch")&&(cb3=="Километр (км)"))
        {
                a*=25.4;
        }
        if((cb2=="inch")&&(cb3=="cm"))
        {
                a*=2.54;
        }
        if((cb2=="inch")&&(cb3=="dm"))
        {
                a*=0.254;
        }
        if((cb2=="inch")&&(cb3=="m"))
        {
                a/=39.37;
        }
        if((cb2=="inch")&&(cb3=="km"))
        {
                a/=39370.079;
        }
        if((cb2=="inch")&&(cb3=="ft"))
        {
                a/=12;
        }
        if((cb2=="icnh")&&(cb3=="yd"))
        {
                a/=36;
        }
        if((cb2=="inch")&&(cb3=="mile"))
        {
                a/=63360;
        }

        //FT


		if((cb2=="ft")&&(cb3=="Километр (км)"))
        {
                a*=304.8;
        }
        if((cb2=="ft")&&(cb3=="cm"))
        {
                a*=30.48;
        }
        if((cb2=="ft")&&(cb3=="dm"))
        {
                a*=3.048;
        }
        if((cb2=="ft")&&(cb3=="m"))
        {
                a/=3.281;
        }
        if((cb2=="ft")&&(cb3=="km"))
        {
                a/=3280.84;
        }
        if((cb2=="ft")&&(cb3=="inch"))
        {
                a*=12;
        }
        if((cb2=="ft")&&(cb3=="yd"))
        {
                a/=3;
        }
        if((cb2=="ft")&&(cb3=="mile"))
        {
                a/=5280;
        }

        //YD


		if((cb2=="yd")&&(cb3=="Километр (км)"))
        {
                a*=914.4;
        }
        if((cb2=="yd")&&(cb3=="cm"))
        {
                a*=91.44;
        }
        if((cb2=="yd")&&(cb3=="dm"))
        {
                a*=9.144;
        }
        if((cb2=="yd")&&(cb3=="m"))
        {
                a/=1.094;
        }
        if((cb2=="yd")&&(cb3=="km"))
        {
                a/=1093.613;
        }
        if((cb2=="yd")&&(cb3=="inch"))
        {
                a*=36;
        }
        if((cb2=="yd")&&(cb3=="ft"))
        {
                a*=3;
        }
        if((cb2=="yd")&&(cb3=="mile"))
        {
                a/=1760;
        }


        //MILE


        if((cb2=="mile")&&(cb3=="Километр (км)"))
        {
                a*=1609344;
        }
        if((cb2=="mile")&&(cb3=="cm"))
        {
                a*=160934.4;
        }
        if((cb2=="mile")&&(cb3=="dm"))
        {
                a*=16093.44;
        }
        if((cb2=="mile")&&(cb3=="m"))
        {
                a*=1609.344;
        }
        if((cb2=="mile")&&(cb3=="km"))
        {
                a*=1.609;
        }
        if((cb2=="mile")&&(cb3=="inch"))
        {
                a*=63360;
        }
        if((cb2=="mile")&&(cb3=="ft"))
        {
                a*=5280;
        }
        if((cb2=="mile")&&(cb3=="yd"))
        {
                a*=1760;
        }

        // SQUARE
        //cm^2

        if((cb2=="cm^2")&&(cb3=="m^2"))
        {
                a/=10000;
        }
        if((cb2=="cm^2")&&(cb3=="km^2"))
        {
                a/=10000000000;
        }
        if((cb2=="cm^2")&&(cb3=="ft^2"))
        {
                a/=929.03;
        }
        if((cb2=="cm^2")&&(cb3=="yd^2"))
        {
                a/=8361.274;
        }

        //m^2

        if((cb2=="m^2")&&(cb3=="cm^2"))
        {
                a*=10000;
        }
        if((cb2=="m^2")&&(cb3=="km^2"))
        {
                a/=1000000;
        }
        if((cb2=="m^2")&&(cb3=="ft^2"))
        {
                a*=10.764;
        }
        if((cb2=="m^2")&&(cb3=="yd^2"))
        {
                a*=1.196;
        }


        //km^2

        if((cb2=="km^2")&&(cb3=="cm^2"))
        {
                a*=10000000000;
        }
        if((cb2=="km^2")&&(cb3=="m^2"))
        {
                a*=1000000;
        }
        if((cb2=="km^2")&&(cb3=="ft^2"))
        {
                a*=10760000;
        }
        if((cb2=="km^2")&&(cb3=="yd^2"))
        {
                a*=1196000;
        }


        //ft^2

        if((cb2=="ft^2")&&(cb3=="cm^2"))
        {
                a*=929.03;
        }
        if((cb2=="ft^2")&&(cb3=="m^2"))
        {
                a/=10.764;
        }
        if((cb2=="ft^2")&&(cb3=="km^2"))
        {
                a/=10760000;
        }
        if((cb2=="ft^2")&&(cb3=="yd^2"))
        {
                a/=9;
        }

        //yd^2

        if((cb2=="yd^2")&&(cb3=="cm^2"))
        {
                a*=8361.274;
        }
        if((cb2=="yd^2")&&(cb3=="m^2"))
        {
                a/=1.196;
        }
        if((cb2=="yd^2")&&(cb3=="km^2"))
        {
                a/=1196000;
        }
        if((cb2=="yd^2")&&(cb3=="ft^2"))
        {
                a*=9;
        }

        //VOLUME

        //ML

        if((cb2=="ml")&&(cb3=="l"))
        {
                a/=1000;
        }
        if((cb2=="ml")&&(cb3=="cm^3"))
        {
                a*=1;
        }
        if((cb2=="ml")&&(cb3=="m^3"))
        {
                a/=1000000;
        }
        if((cb2=="ml")&&(cb3=="ft^3"))
        {
                a/=28316.847;
        }
        if((cb2=="ml")&&(cb3=="yd^3"))
        {
                a/=1310000;
        }



        Edit2->Text=a;
}
//---------------------------------------------------------------------------
