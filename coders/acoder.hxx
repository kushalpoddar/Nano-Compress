
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
