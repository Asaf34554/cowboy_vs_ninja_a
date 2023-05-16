#include "doctest.h"
#include <stdexcept>
#include "sources/Team.hpp"

using namespace std;
using namespace ariel;


TEST_CASE("Point"){
    Point x(1,0);
    Point y(1,4);
    CHECK_EQ(x.getX(),1);
    CHECK_EQ(x.getY(),0.0);
    CHECK_EQ(x.distance(y),4);
    x.setX(2);
    y.setY(5);
    CHECK_EQ(x.getX(),2.0);
    CHECK_EQ(y.getY(),4);
}
TEST_CASE("Character"){
    Character player(0,Point(1,0),"Tupac");
    Character player2(10,Point(1,4),"Drake");
    CHECK_EQ(player.getName(),"Tupac");
    CHECK_FALSE(player.is_Alive());
    CHECK(player2.is_Alive());
    CHECK_EQ(player.distance(&player2),4);
    player2.hit(12);
    CHECK_FALSE(player2.is_Alive());

}
TEST_CASE("Cowboy"){
    Cowboy x("Zoro",Point(1,5));
    Cowboy y("Django",Point(10,10));
    CHECK_EQ(x.getName(),"Zoro");
    CHECK(x.hasboolets());
    // CHECK_EQ(y.getLocation(),Point(10,10));
    x.shoot(&y);
    CHECK_EQ(x.NumOfBullets(),5);
    CHECK_EQ(y.lifePoint(),100);
    Character z(20,Point(1,2),"PoorGuy");
    x.shoot(&z);
    y.shoot(&z);
    x.shoot(&z);
    CHECK_EQ(x.NumOfBullets(),4); 
}

TEST_CASE("Ninja"){
    YoungNinja x("Shneor_Shameah",Point(2,3));
    TrainedNinja y("Yogev_Malca",Point(1,5));
    OldNinja z("Yuval_Shamla",Point(1,1));
    Ninja t(80,Point(1,3),"Adam_malki",2);
    CHECK_EQ(x.lifePoint(),100);
    CHECK_EQ(y.lifePoint(),120);
    CHECK_EQ(z.lifePoint(),150);
    x.slash(&t);
    CHECK_EQ(t.lifePoint(),40);
    z.slash(&t);
    CHECK(t.is_Alive());
    z.move(&t);
    z.slash(&t);
    CHECK_FALSE(t.is_Alive());
}

TEST_CASE("Team"){
    OldNinja x ("Yuval_Shamla",Point(1.5,3.5));
    Cowboy y("Django",Point(2.2,3.3));
    Ninja z(0,Point(1,3),"Adam_malki",2);

    Cowboy t("Zoro",Point(1.5,3));
    Ninja w(60,Point(1,3),"Adam_malki",2);


    Team tm1(&x);
    CHECK_EQ(tm1.stillAlive(),1);
    tm1.add(&y);
    CHECK_EQ(tm1.stillAlive(),2);
    tm1.add(&z);
    CHECK_EQ(tm1.stillAlive(),2);
    CHECK_THROWS(tm1.add(&y));
    Team tm2(&w);
    CHECK_THROWS(tm2.add(&y));
    tm1.attack(&tm2);
    CHECK_EQ(tm2.stillAlive(),2);
    tm1.attack(&tm2);
    CHECK_EQ(tm2.stillAlive(),1);
}
