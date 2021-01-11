
#pragma once
#ifndef BHCODER_HXX
#define BHCODER_HXX

#include <fstream>
#include <memory>

namespace contextcodes {

	// -------------------------------------------------------
	// ----------------------- BHCODER -----------------------
	// -------------------------------------------------------

	class bhcoder {
		class CoderImpl;
		std::unique_ptr<CoderImpl> m_pImpl;

	public:

		// Encodes text and writes the final bit sequence to the output file
		void compress(std::ifstream& ifile, std::ofstream& ofile);

		void operator()(std::ifstream& ifile, std::ofstream& ofile);

		bhcoder(std::ifstream& ifile, std::ofstream& ofile);

		bhcoder();

		~bhcoder();
	};

	// -------------------------------------------------------
	// ---------------------- BHDECODER ----------------------
	// -------------------------------------------------------

	class bhdecoder {
		class DecoderImpl;
		std::unique_ptr<DecoderImpl> m_pImpl;

	public:

		// Decodes text and writes the final bit sequence to the output file
		void decompress(std::ifstream& ifile, std::ofstream& ofile);

		void operator()(std::ifstream& ifile, std::ofstream& ofile);

		bhdecoder(std::ifstream& ifile, std::ofstream& ofile);

		bhdecoder();

		~bhdecoder();
	};

}

#endif // BHCODER_HXX
