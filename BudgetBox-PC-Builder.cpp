#include <iostream>
using namespace std;
int main() {
    double budget;
    cout << "Enter Your Budget $: ";
    cin >> budget;
    cout << endl;

    // Processor (Module-1)
    cout << "==================================="<<endl;
    cout << "Select an Intel Processor for Your PC" << endl;
    cout << " " << endl;

    double proc_price1, proc_price2, proc_price3;
    char proc_gen[3][50] = {"10th Gen", "11th Gen", "12th Gen"};

    cout << "Select your required Intel Processor: " << endl;
    cout << "1. i5" << endl;
    cout << "2. i7" << endl;
    cout << "3. i9" << endl;

    int proc_selection;
    cin >> proc_selection;

    while (proc_selection < 1 || proc_selection > 3) {
        cout << "Invalid selection. Please choose between 1 and 3: ";
        cin >> proc_selection;
    }

    cout << "Select the generation: " << endl;
    cout << "1. " << proc_gen[0] << endl;
    cout << "2. " << proc_gen[1] << endl;
    cout << "3. " << proc_gen[2] << endl;

    int gen_selection;
    cin >> gen_selection;

    while (gen_selection < 1 || gen_selection > 3) {
        cout << "Invalid selection. Please choose between 1 and 3: ";
        cin >> gen_selection;
    }

    if (proc_selection == 1) {
        proc_price1 = 149.99;
        proc_price2 = 179.99;
        proc_price3 = 209.99;
    } else if (proc_selection == 2) {
        proc_price1 = 179.99;
        proc_price2 = 299.99;
        proc_price3 = 319.99;
    } else if (proc_selection == 3) {
        proc_price1 = 299.99;
        proc_price2 = 349.99;
        proc_price3 = 399.99;
    }

    double proc_price;
    switch (gen_selection) {
        case 1: proc_price = proc_price1; break;
        case 2: proc_price = proc_price2; break;
        case 3: proc_price = proc_price3; break;
    }

    cout << endl;
    cout << "Selected Processor: Intel ";
    if (proc_selection == 1) cout << "i5 ";
    else if (proc_selection == 2) cout << "i7 ";
    else if (proc_selection == 3) cout << "i9 ";
    cout << proc_gen[gen_selection - 1] << " - $" << proc_price << endl;

    cout << " " << endl;
  
    // Motherboard (Module-2)
    cout << "==================================="<<endl;
cout << "Select a Motherboard manufacturer for Your PC" << endl;
    cout << std::endl;

    char mb_com[3][50] = {"Gigabyte", "ASUS", "MSI"};

    for (int i = 0; i < 3; ++i) {
    cout << i + 1 << ". " << mb_com[i] << endl;
    }

    
    int mb_com_selection;
    cout << "Enter the number of your choice: ";
    cin >> mb_com_selection;

    if (mb_com_selection >= 1 && mb_com_selection <= 3) {
        cout << "You have selected: " << mb_com[mb_com_selection-1] << endl;
    } else {
        cout << "Invalid selection." << endl;
    }

    while (mb_com_selection < 1 || mb_com_selection > 3) {
        cout << "Invalid selection. Please choose between 1 and 3: ";
        cin >> mb_com_selection;
    }

    cout << endl;

    double mb_price1, mb_price2, mb_price3;
    string mb1, mb2, mb3;

    if (mb_com_selection == 1) {
        mb_price1 = 124.99;
        mb_price2 = 139.99;
        mb_price3 = 159.99;
        mb1 = "Gigabyte Z790 Aorus Master";
        mb2 = "Z790 Gaming X AX";
        mb3 = "Gigabyte B650 AORUS Elite AX";
        cout << "Select your required Gigabyte Motherboard" << endl;
    } else if (mb_com_selection == 2) {
        mb_price1 = 139.99;
        mb_price2 = 169.99;
        mb_price3 = 189.99;
        mb1 = "ASUS ROG Strix B550-F";
        mb2 = "ASUS TUF Gaming X570-Plus";
        mb3 = "ASUS Prime B560M-A";
        cout << "Select your required ASUS Motherboard" << endl;
    } else if (mb_com_selection == 3) {
        mb_price1 = 179.99;
        mb_price2 = 199.99;
        mb_price3 = 209.99;
        mb1 = "MSI MPG B550 Gaming Edge WiFi";
        mb2 = "MSI MAG B550 Tomahawk";
        mb3 = "MSI MEG X570 Unify";
        cout << "Select your required MSI Motherboard" << endl;
    }

    int mb_selection;
    cout << "1. " << mb1 << " - $" << mb_price1 << endl;
    cout << "2. " << mb2 << " - $" << mb_price2 << endl;
    cout << "3. " << mb3 << " - $" << mb_price3 << endl;
    cin >> mb_selection;

    while (mb_selection < 1 || mb_selection > 3) {
        cout << "Invalid selection. Please choose between 1 and 3: ";
        cin >> mb_selection;
    }

    double mb_price;
    switch (mb_selection) {
        case 1: mb_price = mb_price1; break;
        case 2: mb_price = mb_price2; break;
        case 3: mb_price = mb_price3; break;
    }

    cout << endl;
    cout << "Selected Motherboard: ";
    if (mb_selection == 1) cout << mb1;
    else if (mb_selection == 2) cout << mb2;
    else if (mb_selection == 3) cout << mb3;
    cout << " - $" << mb_price << endl;

     // SSD (Module-3)
     cout << "==================================="<<endl;
    cout << "Select an SSD manufacturer for Your PC" << endl;
    cout << " " << endl;

    char ssd[3][20] = {"Crucial", "Samsung", "Western Digital"};

    for (int i = 0; i < 3; ++i) {
        cout << i + 1 << ". " << ssd[i] << endl;
    }

    int ssd_com = 0;

    cin >> ssd_com;

    while (ssd_com < 1 || ssd_com > 3) {
        cout << "Invalid selection. Please choose between 1 and 3: ";
        cin >> ssd_com;
    }

    cout << endl;

    double ssd_price1, ssd_price2, ssd_price3;
    string ssd_opt1, ssd_opt2, ssd_opt3;

    if (ssd_com == 1) { 
        ssd_price1 = 109.99;
        ssd_price2 = 89.99;
        ssd_price3 = 69.99;

        ssd_opt1 = "Crucial P5 Plus 1TB";
        ssd_opt2 = "Crucial MX500 1TB";
        ssd_opt3 = "Crucial BX500 480GB";
        
        cout << "Select your required Crucial SSD: " << endl;
    } else if (ssd_com == 2) {
        ssd_price1 = 129.99;
        ssd_price2 = 99.99;
        ssd_price3 = 79.99;

        ssd_opt1 = "Samsung 970 EVO Plus 1TB";
        ssd_opt2 = "Samsung 860 EVO 1TB";
        ssd_opt3 = "Samsung 870 QVO 1TB";
        
        cout << "Select your required Samsung SSD: " << endl;
    } else if (ssd_com == 3) { 
        ssd_price1 = 89.99;
        ssd_price2 = 69.99;
        ssd_price3 = 49.99;

        ssd_opt1 = "Western Digital WD Blue 1TB";
        ssd_opt2 = "Western Digital WD Black SN850 1TB";
        ssd_opt3 = "Western Digital WD Green 480GB";
        
        cout << "Select your required Western Digital SSD: " << endl;
    }

    int ssd_selection;
    cout << "1. " << ssd_opt1 << " - $" << ssd_price1 << endl;
    cout << "2. " << ssd_opt2 << " - $" << ssd_price2 << endl;
    cout << "3. " << ssd_opt3 << " - $" << ssd_price3 << endl;
    cin >> ssd_selection;

    while (ssd_selection < 1 || ssd_selection > 3) {
        cout << "Invalid selection. Please choose between 1 and 3: ";
        cin >> ssd_selection;
    }

    double ssd_price;
    switch (ssd_selection) {
        case 1: ssd_price = ssd_price1; break;
        case 2: ssd_price = ssd_price2; break;
        case 3: ssd_price = ssd_price3; break;
    }

    cout << endl;
    cout << "Selected SSD: ";
    if (ssd_selection == 1) cout << ssd_opt1;
    else if (ssd_selection == 2) cout << ssd_opt2;
    else if (ssd_selection == 3) cout << ssd_opt3;
    cout << " - $" << ssd_price << endl;


     // RAM (Module-4)
     cout << "==================================="<<endl;
      cout << "Select an RAM manufacturer for Your PC" << endl;
    cout << " " << endl;

    char ram[3][20] = {"G.Skill", "Samsung", "Kingstone"};

    for (int i = 0; i < 3; ++i) {
        cout << i + 1 << ". " << ram[i] << endl;
    }

    int ram_com = 0;

    cin >> ram_com;

    while (ram_com < 1 || ram_com > 3) {
        cout << "Invalid selection. Please choose between 1 and 3: ";
        cin >> ram_com;
    }

    cout << endl;

    double ram_price1,ram_price2, ram_price3;
    string ram_opt1, ram_opt2, ram_opt3;

    if (ram_com == 1) { 
        ram_price1 = 109.99;
        ram_price2 = 89.99;
        ram_price3 = 69.99;

        ram_opt1 = "G.Skill 8GB";
        ram_opt2 = "G.Skill 16GB";
        ram_opt3 = "G.Skill 32GB";
        
        cout << "Select your required G.Skill RAM: " << endl;
    } else if (ram_com == 2) {
        ram_price1 = 19.99;
        ram_price2 = 29.99;
        ram_price3 = 34.99;

        ram_opt1 = "Samsung 8GB";
        ram_opt2 = "Samsung 16GB";
        ram_opt3 = "Samsung 32GB";
        
        cout << "Select your required Samsung RAM: " << endl;
    } else if (ram_com == 3) { 
        ram_price1 = 19.99;
        ram_price2 = 24.99;
        ram_price3 = 49.99;

        ram_opt1 = "Kingstone 8GB";
        ram_opt2 = "Kingstone 16GB";
        ram_opt3 = "Kingstone 32GB";
        
        cout << "Select your required kingstone RAM: " << endl;
    }

    int ram_selection;
    cout << "1. " << ram_opt1 << " - $" << ram_price1 << endl;
    cout << "2. " << ram_opt2 << " - $" << ram_price2 << endl;
    cout << "3. " << ram_opt3 << " - $" << ram_price3 << endl;
    cin >> ram_selection;

    while (ram_selection < 1 || ram_selection > 3) {
        cout << "Invalid selection. Please choose between 1 and 3: ";
        cin >> ram_selection;
    }

    double ram_price;
    switch (ram_selection) {
        case 1: ram_price = ram_price1; break;
        case 2: ram_price = ram_price2; break;
        case 3: ram_price = ram_price3; break;
    }

    cout << endl;
    cout << "Selected SSD: ";
    if (ram_selection == 1) cout << ram_opt1;
    else if (ram_selection == 2) cout << ram_opt2;
    else if (ram_selection == 3) cout << ram_opt3;
    cout << " - $" << ram_price << endl;

     // GPU (Module-5)
cout << "==================================="<<endl;
    cout << "Select an GPU manufacturer for Your PC" << endl;
    cout << " " << endl;

    char gpu[3][20] = {"NVIDIA", "AMD", "Intel"};

    for (int i = 0; i < 3; ++i) {
        cout << i + 1 << ". " << gpu[i] << endl;
    }

    int gpu_com = 0;

    cin >> gpu_com;

    while (gpu_com < 1 || gpu_com > 3) {
        cout << "Invalid selection. Please choose between 1 and 3: ";
        cin >> gpu_com;
    }

    cout << endl;

    double gpu_price1,gpu_price2, gpu_price3;
    string gpu_opt1, gpu_opt2, gpu_opt3;

    if (gpu_com == 1) { 
        gpu_price1 = 299.99;
        gpu_price2 = 399.99;
        gpu_price3 = 499.99;

        gpu_opt1 = "NVIDIA GTX 1660 Super";
        gpu_opt2 = "NVIDIA RTX 3060 Ti";
        gpu_opt3 = "NVIDIA GTX 1660 Super";
        
        cout << "Select your required NVIDIA GPU: " << endl;
    } else if (gpu_com == 2) {
        gpu_price1 = 199.99;
        gpu_price2 = 249.99;
        gpu_price3 = 399.99;

        gpu_opt1 = "AMD Radeon RX 5600 XT";
        gpu_opt2 = "AMD Radeon RX 6700 XT";
        gpu_opt3 = "AMD Radeon RX 6800 XT";
        
        cout << "Select your required AMD GPU: " << endl;
    } else if (gpu_com == 3) { 
        gpu_price1 = 199.99;
        gpu_price2 = 299.99;
        gpu_price3 = 359.99;

        gpu_opt1 = "Intel Iris Xe MAX";
        gpu_opt2 = "Intel Arc A750";
        gpu_opt3 = "Intel Arc A770";
        
        cout << "Select your required Intel GPU: " << endl;
    }

    int gpu_selection;
    cout << "1. " << gpu_opt1 << " - $" << gpu_price1 << endl;
    cout << "2. " << gpu_opt2 << " - $" << gpu_price2 << endl;
    cout << "3. " << gpu_opt3 << " - $" << gpu_price3 << endl;
    cin >> gpu_selection;

    while (gpu_selection < 1 || gpu_selection > 3) {
        cout << "Invalid selection. Please choose between 1 and 3: ";
        cin >> gpu_selection;
    }

    double gpu_price;
    switch (gpu_selection) {
        case 1: gpu_price = gpu_price1; break;
        case 2: gpu_price = gpu_price2; break;
        case 3: gpu_price = gpu_price3; break;
    }

    cout << endl;
    cout << "Selected GPU: ";
    if (gpu_selection == 1) cout << gpu_opt1;
    else if (gpu_selection == 2) cout << gpu_opt2;
    else if (gpu_selection == 3) cout << gpu_opt3;
    cout << " - $" << gpu_price << endl;
    //PSU (Module-6)
    cout << "==================================="<<endl;
 cout << "Select an PSU manufacturer for Your PC" << endl;
    cout << " " << endl;

    char psu[3][20] = {"Corsair", "EVGA", "Cooler Master"};

    for (int i = 0; i < 3; ++i) {
        cout << i + 1 << ". " << psu[i] << endl;
    }

    int psu_com = 0;

    cin >> psu_com;

    while (psu_com < 1 || psu_com > 3) {
        cout << "Invalid selection. Please choose between 1 and 3: ";
        cin >> psu_com;
    }

    cout << endl;

    double psu_price1,psu_price2, psu_price3;
    string psu_opt1, psu_opt2, psu_opt3;

    if (psu_com == 1) { 
        psu_price1 = 79.99;
        psu_price2 = 99.99;
        psu_price3 = 199.99;

        psu_opt1 = "Corsair VS600";
        psu_opt2 = "Corsair CX750M";
        psu_opt3 = "Corsair RM850x";
        
        cout << "Select your required Corsair GPU: " << endl;
    } else if (psu_com == 2) {
        psu_price1 = 69.99;
        psu_price2 = 89.99;
        psu_price3 = 109.99;

        psu_opt1 = "EVGA 600 W1";
        psu_opt2 = "EVGA 750 BQ";
        psu_opt3 = "EVGA SuperNOVA 850 G3";
        
        cout << "Select your required AMD GPU: " << endl;
    } else if (psu_com == 3) { 
        psu_price1 = 89.99;
        psu_price2 = 109.99;
        psu_price3 = 129.99;

        psu_opt1 = "Cooler Master V850";
        psu_opt2 = "Cooler Master MWE 750";
        psu_opt3 = "Cooler Master MasterWatt 650";
        
        cout << "Select your required Cooler Master PSU: " << endl;
    }

    int psu_selection;
    cout << "1. " << psu_opt1 << " - $" << psu_price1 << endl;
    cout << "2. " << psu_opt2 << " - $" << psu_price2 << endl;
    cout << "3. " << psu_opt3 << " - $" << psu_price3 << endl;
    cin >> psu_selection;

    while (psu_selection < 1 || psu_selection > 3) {
        cout << "Invalid selection. Please choose between 1 and 3: ";
        cin >> psu_selection;
    }

    double psu_price;
    switch (psu_selection) {
        case 1: psu_price = psu_price1; break;
        case 2: psu_price = psu_price2; break;
        case 3: psu_price = psu_price3; break;
    }

    cout << endl;
    cout << "Selected PSU: ";
    if (psu_selection == 1) cout << psu_opt1;
    else if (psu_selection == 2) cout << psu_opt2;
    else if (psu_selection == 3) cout << psu_opt3;
    cout << " - $" << psu_price << endl;


     //Case (Module-7)
     cout << "==================================="<<endl;
  cout << "Select a Case manufacturer for Your PC" << endl;
    cout << " " << endl;

    char case_com[3][25] = {"NZXT","Fractal","Cooler Master"};

    int case_com_selection;
     
     for (int i = 0; i < 3; ++i) {
        cout << i + 1 << ". " << case_com[i] << endl;
    }

    cin >> case_com_selection;

    while (case_com_selection < 1 || case_com_selection > 3) {
        cout << "Invalid selection. Please choose between 1 and 3: ";
        cin >> case_com_selection;
    }

    cout << endl;

    double case_price1, case_price2, case_price3;
    string case1, case2, case3;

    if (case_com_selection == 1) { 
        case_price1 = 99.99;
        case_price2 = 79.99;
        case_price3 = 59.99;

        case1 = "NZXT H510 Elite";
        case2 = "NZXT H510i";
        case3 = "NZXT H510";
        
        cout << "Select your required NZXT Case: " << endl;
    } else if (case_com_selection == 2) {
        case_price1 = 129.99;
        case_price2 = 99.99;
        case_price3 = 79.99;

        case1 = "Fractal Design Meshify C";
        case2 = "Fractal Design Define 7";
        case3 = "Fractal Design Focus G";
        
        cout << "Select your required Fractal Case: " << endl;
    } else if (case_com_selection == 3) { 
        case_price1 = 89.99;
        case_price2 = 69.99;
        case_price3 = 49.99;

        case1 = "Cooler Master MasterBox TD500 Mesh";
        case2 = "Cooler Master MasterBox Q500L";
        case3 = "Cooler Master MasterBox MB311L";
        
        cout << "Select your required Cooler Master Case: " << endl;
    }

    int case_selection;
    cout << "1. " << case1 << " - $" << case_price1 << endl;
    cout << "2. " << case2 << " - $" << case_price2 << endl;
    cout << "3. " << case3 << " - $" << case_price3 << endl;
    cin >> case_selection;

    while (case_selection < 1 || case_selection > 3) {
        cout << "Invalid selection. Please choose between 1 and 3: ";
        cin >> case_selection;
    }

    double case_price;
    switch (case_selection) {
        case 1: case_price = case_price1; break;
        case 2: case_price = case_price2; break;
        case 3: case_price = case_price3; break;
    }

    cout << endl;
    cout << "Selected Case: ";
    if (case_selection == 1) cout << case1;
    else if (case_selection == 2) cout << case2;
    else if (case_selection == 3) cout << case3;
    cout << " - $" << case_price << endl;

     //Calculation
 cout << "==================================="<<endl;
double total_price = proc_price + mb_price + ssd_price + ram_price + gpu_price + psu_price + case_price;

    cout << " " << endl;
    cout << "Total Price: $" << total_price << endl;

    if (total_price > budget) {
        cout << "Unfortunately, Total price exceeds your budget." << endl;
    } else {
        cout << "Total price is within budget." << endl;
    }


    return 0;


}