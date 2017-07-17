#include <cstdlib>
#include <iostream>
#include <memory>
#include <utility>
#include <boost/asio.hpp>
#include "MyServer.h"

int main(int argc, char* argv[])
{
  try
  {

    boost::asio::io_service io_service;

    MyServer server(io_service, std::atoi("8001"));

    io_service.run();
  }
  catch (std::exception& e)
  {
    std::cerr << "Exception: " << e.what() << "\n";
  }

  return 0;
}
