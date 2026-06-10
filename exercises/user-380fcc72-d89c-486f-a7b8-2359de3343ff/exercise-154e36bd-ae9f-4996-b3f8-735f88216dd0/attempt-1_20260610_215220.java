/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/JSP_Servlet/Servlet.java to edit this template
 */
package controller;

import java.io.IOException;
import java.io.PrintWriter;
import jakarta.servlet.ServletException;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

/**
 *
 * @author ASUS
 */
public class CalculatorServlet extends HttpServlet {

    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {

    }

    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        String sa = request.getParameter("a");
        String sb = request.getParameter("b");
        String sc = request.getParameter("cal");
        double a = Integer.parseInt(sa);
        double b = Integer.parseInt(sb);
        double res = 0;
        String msg = "";
        switch (sc) {
            case "+":
                res = a + b;
                break;
            case "-":
                res = a - b;
                break;
            case "*":
                res = a * b;
                break;
            case "/":
                if (b != 0) {
                    res = a / b;
                } else {
                    msg = "b must be > 0!";
                }
                break;
            default:
                break;
        }
        request.setAttribute("result", res);
        request.setAttribute("msg", msg);

        request.getRequestDispatcher("caljsp.jsp")
                .forward(request, response);
    }

}
