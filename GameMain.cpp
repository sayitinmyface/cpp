#include "game_alpha/GameStructures.cpp"
void funcExpress();
int main()
{
    funcExpress();
    return 0;
}
void funcExpress()
{
    char inputChar;
    struct Enemies Enemy;
    struct MainCharacter Main;
    while (true)
    {
        Main.setMainCharacter();
        Enemy.setEnemies();        
        // 
        cout << "main character "  << "위치 x :" <<  Main.row << endl;
        cout << "main character "  << "위치 y :" <<  Main.col << endl;
        cout << "main character "  << "survival :"  <<  Main.survival << endl;
        cout << "main character "  << "display :"  <<  Main.display << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << "enemy " << i << "위치 x :" <<  Enemy.Enemies[i].row << endl;
            cout << "enemy " << i << "위치 y :" <<  Enemy.Enemies[i].col << endl;
            cout << "enemy " << i << "survival :"  <<  Enemy.Enemies[i].survival << endl;
            cout << "enemy " << i << "display :"  <<  Enemy.Enemies[i].display << endl;
        }
        cout << endl;
        //    
        cout << "continue? no = 'N' ";
        cin >> inputChar;
        if (inputChar=='N')
        {
            cout << "end!" << endl;
            break;
        }
    }
}
// 
// void funcExpress()
// {
//     char inputChar;
//     string str_temp;
//     struct Enemies enemies;
//     enemies.setEnemies();
//     while(true)
//     {
//         for (int i = 0; i < 100; i++) cout << "*";
//         cout << endl << endl;
//         for (int ii = 0; ii < 20; ii++)
//         {
//             cout << "*";
//             for (int jj = 0; jj < 50; jj++)
//             {
//                 for (int kk = 0; kk < 10; kk++)
//                 {
                                        
//                 }
//             }
//             cout << "*" << endl << endl;
//         }
//         for (int i = 0; i < 100; i++) cout << "*";
//         cout << endl;
//         //    
//         cout << "continue? no = 'N' ";
//         cin >> inputChar;
//         if (inputChar=='N')
//         {
//             cout << "end!" << endl;
//             break;
//         }
//     }
// }