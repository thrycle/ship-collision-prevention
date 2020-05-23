//////////////////////////////////////////////////////////////////////////////
// Name:        SVGRect.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_RECT_H
#define WX_SVG_RECT_H

#include "String_wxsvg.h"
#include "SVGMatrix.h"

class wxSVGRect
{
  protected:
    double m_x;
    double m_y;
    double m_width;
    double m_height;
    bool m_empty;

  public:
    inline double GetX() const { return m_x; }
    inline void SetX(double n) { m_x = n; m_empty = false; }

    inline double GetY() const { return m_y; }
    inline void SetY(double n) { m_y = n; m_empty = false; }

    inline double GetWidth() const { return m_width; }
    inline void SetWidth(double n) { m_width = n; m_empty = false; }

    inline double GetHeight() const { return m_height; }
    inline void SetHeight(double n) { m_height = n; m_empty = false; }
    
    inline bool IsEmpty() const { return m_empty; }
    inline void Clear() { m_x = m_y = m_width = m_height = 0; m_empty = true; }

  public:
    wxSVGRect(): m_x(0), m_y(0), m_width(0), m_height(0), m_empty(true) {}
    wxSVGRect(double x, double y, double width, double height):
      m_x(x), m_y(y), m_width(width), m_height(height), m_empty(false) {}
    ~wxSVGRect() {}
    wxString GetValueAsString() const;
    void SetValueAsString(const wxString& value);
    wxSVGRect MatrixTransform(const wxSVGMatrix& matrix) const;
};

#endif // WX_SVG_RECT_H
