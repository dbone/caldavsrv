#include "iCalendar.h"

iCalendar::iCalendar(string prodid, string version) {
  // TODO Update to have asserts or throw exceptions for variables.
  m_prodid = prodid;
  m_version = version;
}

void iCalendar::print() const {
  std::cout << "iCalendar(" << m_prodid << ", " << m_verson << ")" << std::endl;
}
