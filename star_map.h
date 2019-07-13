// Define Pixel class
class Pixel
{
  public:
  Pixel();
  ~Pixel();

  private:
  int x;
  int y;
  wchar_t symbol;
  wchar_t color;
  bool is_enabled;
};


// class StarGenerator
// {
//   public:
//
//   private:
// };


// Define StarMap class
class StarMap
{
  public:
  StarMap();
  ~StarMap();

  private:
  Pixel ** map;
  int map_width;
  int map_height;

};
