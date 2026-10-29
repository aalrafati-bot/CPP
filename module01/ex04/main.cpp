/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:28:37 by aalrofat          #+#    #+#             */
/*   Updated: 2026/10/29 11:28:37 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>//to use ifstream nd ofstream

static int read_replace(std::ifstream& inputfile, std::ofstream& outputfile,
    std::string& s1, std::string& s2)
    {
        std::string line;
        size_t index;

        while (std::getline(inputfile, line))///start read
        {
            index = line.find(s1, 0);///save location first appear of s1//search
            while (index != std::string::npos)///match
            {
                line.erase(index, s1.length());///replace
                line.insert(index, s2);

                index = line.find(s1, index + s2.length());
            }
            outputfile << line;
            if (!inputfile.eof())
                outputfile << '\n';
        }
        return (0); 
    }

int main(int argc, char **argv)
{
    std::string filename;
    std::string s1;
    std::string s2;

    if (argc != 4)
    {
        std::cerr << "Error: program takes onley 3 parameters" << std::endl;///cerr like stderr in cc
        return (1); 
    }
    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    if (s1.empty())
    {
        std::cerr << "Error: s1 can't be empty" << std::endl;
        return (1);
    }
    std::ifstream inputfile(filename.c_str());///open file  in constructors
    if (!inputfile)
    {
        std::cerr << "Error: Open file failed" << std::endl;
        return (1);
    }

    std::ofstream outputfile((filename + ".replace").c_str());//creat newfile
    if (!outputfile)
    {
        std::cerr << "Error: create newfile failed" << std::endl;
        inputfile.close();
        return (1);
    }
    read_replace(inputfile, outputfile, s1, s2);
    inputfile.close();
    outputfile.close();
    return (0);
}