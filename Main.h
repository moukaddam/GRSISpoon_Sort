// --------------------------------------------------------
// Definitions:
// --------------------------------------------------------

// Which parts of code to run:
#define SORT_CALIB 1
#define SORT_EFF   0
#define SORT_WAVES 0
#define SORT_PROP  0
#define SORT_DIFF  0
// Printing info
#define PRINT_OUTPUT 1
#define PRINT_FREQ 1000
// Main loop control
#define MAX_EVENTS 0
#define DEBUG_TREE_LOOP 0
// ROOT Stuff
#define ROOT_VIRT_SIZE    500000000  //  500MB 
// Stuff about the experimental setup
#define CLOVERS  16
#define CRYSTALS  4
#define SEGS      8
#define INTEGRATION 125 // Integration factor applied to charge values
// Options for sorting
#define EN_THRESH 2  // energies less than this keV ignored
#define USE_ALT_CALIB 1
// Constants
#define PI 3.14159265359

// Calculation of Energy from waveform
#define INITIAL_SAMPS 40
#define FINAL_SAMPS 80


// --------------------------------------------------------
// Data:
// --------------------------------------------------------

// Structure to hold Mnemonic
struct Mnemonic	{
   int arrayposition;
   int	segment;
   std::string system;
   std::string subsystem;
   std::string arraysubposition;
   std::string collectedcharge;
   std::string outputsensor;
};
// Storing alternate Calibration
extern vector<string> CalibNames;
extern vector<vector<float>> CalibValues;

//extern TCanvas *cWave1, *ctemp;

// --------------------------------------------------------
// Functions:
// --------------------------------------------------------

// Function to parse Mnemonic name:
void ParseMnemonic(std::string *name,Mnemonic *mnemonic);
// Convert crystal Name/number
int Col2Num(char Colour);
char Num2Col(int Crystal);
// Calibration
float CalibrateEnergy(int Charge, std::vector<float> Coefficients);
// Waveform energy
float CalcWaveCharge(std::vector<int>  wavebuffer);

