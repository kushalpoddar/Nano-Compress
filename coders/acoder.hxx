/*********************************Project Report********************************

Nano Compress

Name : Pinaki Das and Kushal Poddar
Subject : Object Oriented Programming
Supervised B
y :  Dr Mukesh Kumar Giluka,  Assistant Professor, CSE
Computer Science and Engineering
School of Engineering
Jawaharlal Nehru University
New Delhi 110067


Topic : Nano Compress  : A tool for compression using C++

Please find the link to the report here
https://docs.google.com/presentation/d/1tR-VtD5DP9qoRi20wdlXQgLjodeaWK1l1Uw-vz4shCw/edit?usp=sharing
*/
#pragma once
#ifndef ACODER_HXX
#define ACODER_HXX

#include <fstream>
#include <memory>

namespace staticcodes {

	// -------------------------------------------------------
	// ----------------------- ACODER ------------------------
	// -------------------------------------------------------

	class acoder {
		class CoderImpl;
		std::unique_ptr<CoderImpl> m_pImpl;

	public:

		// Encodes text and writes the final bit sequence to the output file
		void compress(std::ifstream& ifile, std::ofstream& ofile);

		void operator()(std::ifstream& ifile, std::ofstream& ofile);

		acoder(std::ifstream& ifile, std::ofstream& ofile);

		acoder();

		~acoder();
	};

	// -------------------------------------------------------
	// ----------------------- DECODER -----------------------
	// -------------------------------------------------------

	class adecoder {
		class DecoderImpl;
		std::unique_ptr<DecoderImpl> m_pImpl;

	public:

		// Decodes text and writes the final bit sequence to the output file
		void decompress(std::ifstream& ifile, std::ofstream& ofile);

		void operator()(std::ifstream& ifile, std::ofstream& ofile);

		adecoder(std::ifstream& ifile, std::ofstream& ofile);

		adecoder();

		~adecoder();
	};

}

#endif // ACODER_HXX
